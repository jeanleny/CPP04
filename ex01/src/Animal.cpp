#include <Animal.hpp> 

Animal::Animal() : type("Professionnal BeatBoxer")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& obj) : type(obj.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const& rhs)
{
	std::cout << "Animal assignement operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

void	Animal::makeSound()
{
	std::cout << "Animal beatboxing" << std::endl;
}

std::string	Animal::getType()
{
	return (this->type);
}
