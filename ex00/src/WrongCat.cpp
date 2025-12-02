#include <WrongCat.hpp>

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat &WrongCat::operator=(WrongCat const& rhs)
{
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

