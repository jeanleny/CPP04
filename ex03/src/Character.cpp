#include <Character.hpp>
#include "AMateria.hpp"

Character::Character() : _name("Default"), inventory()
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string name) : _name(name), inventory()
{
	std::cout << "Character argument constructor" << std::endl;
}

Character::Character(const Character& obj) : _name(obj._name), inventory()
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (obj.inventory[i])
			inventory[i] = obj.inventory[i]->clone();
}

Character& Character::operator=(const Character& rhs)
{
	std::cout << "Character assignement operator called" << std::endl;
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4 ; i++)
		delete inventory[i];
}

std::string const& Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << _name << " can't equip : wrong object" << std::endl;
		return ;
	}
	if (held(*m))
	{
		std::cout << m->getType() << " is already held" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			std::cout << _name << " : add " << m->getType() << " to inventory" << std::endl;
			inventory[i] = m;
			return ;
		}
	}
	std::cout << _name << " : full Inventory" << std::endl;
}

void	Character::unequip(int idx)
{
	if ((idx > 3 || idx < 0) || !inventory[idx])
	{
		std::cout << _name << " : nothing to unequip here !" << std::endl;
		return ;
	}
	else 
	{
		std::cout << _name << " : removed " << inventory[idx]->getType() << " from inventory " << std::endl;
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (!this->inventory[idx])
	{
		std::cout << this->_name << " can't use : wrong materia" << std::endl;
		return ;
	}
	std::cout << _name << " : ";
	this->inventory[idx]->use(target);
}

bool	Character::held(AMateria& m)
{
	for (int i = 0; this->inventory[i]; i++)
		if (inventory[i] == &m)
			return (true);
	return (false);
}
