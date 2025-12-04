#include <Cure.hpp>
#include "ICharacter.hpp"

Cure::Cure()
{
	std::cout << "Cure Default cosntructor" << std::endl;
	type = "cure";
}

Cure::Cure(const Cure& obj) 
{
	std::cout << "Cure Default cosntructor" << std::endl;
	this->type = obj.type;
}

Cure& Cure::operator=(const Cure& rhs)
{
	std::cout << "Cure assignement operator" << std::endl;
	(void)rhs;
	//if (this != &rhs)
	//		this->type = rhs.type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure *Cure::clone() const
{
	Cure *obj = new Cure();

	return (obj);	
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
