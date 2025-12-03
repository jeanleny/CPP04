#include <Character.hpp>

Character::Character() : name("Default")
{
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string name) : name(name)
{
	std::cout << "Character argument constructor" << std::endl;
}

Character::Character(const Character& obj) : name(obj.name)
{
	std::cout << "Character argument constructor" << std::endl;
}

Character& Character::operator=(const Character& rhs)
{
	std::cout << "Character assignement operator called" << std::endl;
	if (this != &rhs)
		this->name = rhs.name;
	return (*this);
}
