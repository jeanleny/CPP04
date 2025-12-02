#ifndef DOG_HPP
# define DOG_HPP

#include <Animal.hpp>

class	Dog : public Animal
{
	public :
	Dog();
	Dog(const Dog &obj);
	Dog& operator=(Dog const& rhs);
	~Dog();
	virtual void makeSound();

};

#endif
