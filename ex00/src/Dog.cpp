#include <Dog.hpp>
#include <Animal.hpp>

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog (const Dog& obj) : Animal(obj)
{
	std::cout << "Dog copy destructor called" << std::endl;
	type = "Dog";
}

Dog &Dog::operator=(Dog const& rhs)
{
	std::cout << "Dog assignement operator called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound()
{
	std::cout << "Woof obviously" << std::endl;
}
