#include <Character.hpp>
#include "AMateria.hpp"

Character::Character() : _name("Default")
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character argument constructor" << std::endl;
}

Character::Character(const Character& obj) : _name(obj._name)
{
	std::cout << "Character argument constructor" << std::endl;
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
}

std::string const& Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	(void)m;
}

void	Character::unequip(int idx)
{
	(void)idx;
}

void	Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
	//use amateria function
	(void)idx;
	(void)target;
}
