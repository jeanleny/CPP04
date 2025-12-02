#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
	Animal();
	Animal(Animal const& obj);
	Animal& operator=(Animal const& rhs);
	virtual ~Animal();
	virtual void	makeSound() = 0;
	std::string		getType();

	protected:
	std::string type;

	private :

};

#endif
