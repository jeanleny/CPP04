#include <Ice.hpp>

Ice::Ice()
{
	std::cout << "Ice Default cosntructor" << std::endl;
	type = "ice";
}

Ice::Ice(const Ice& obj) 
{
	std::cout << "Ice Default cosntructor" << std::endl;
	this->type = obj.type;
}

Ice& Ice::operator=(const Ice& rhs)
{
	std::cout << "Ice assignement operator" << std::endl;
	(void)rhs;
	//if (this != &rhs)
	//		this->type = rhs.type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice *Ice::clone() const
{
	Ice *obj = new Ice();

	return (obj);	
}

