#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) : type(obj.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const& rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound()
{
	std::cout << "Various Pain noises" << std::endl;
}

std::string WrongAnimal::getType()
{
	return (this->type);
}
