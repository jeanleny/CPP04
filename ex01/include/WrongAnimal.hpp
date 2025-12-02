#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	public :
	WrongAnimal();
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal& operator=(WrongAnimal const& rhs);
	virtual ~WrongAnimal();
	void	makeSound();
	std::string	getType();

	protected:
	std::string type;
};

#endif
