#include <Cat.hpp>
#include <Animal.hpp>
#include <Brain.hpp>

Cat::Cat() 
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat (const Cat& obj) : Animal(obj)
{
	std::cout << "Cat copy destructor called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat &Cat::operator=(Cat const& rhs)
{
	std::cout << "Cat assignement operator called" << std::endl;
	delete brain;
	brain = new Brain();
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Meow isn't it ?" << std::endl;
}
