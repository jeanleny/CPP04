#include <Cat.hpp>
#include <Animal.hpp>

Cat::Cat() 
{
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat (const Cat& obj) : Animal(obj)
{
	std::cout << "Cat copy destructor called" << std::endl;
	type = "Cat";
}

Cat &Cat::operator=(Cat const& rhs)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Meow isn't it ?" << std::endl;
}
