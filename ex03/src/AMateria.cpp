#include <AMateria.hpp>
#include <ICharacter.hpp>

AMateria::AMateria () : type("Default")
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria (std::string const & type) : type(type)
{
	std::cout << "Argument AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& obj) : type(obj.type)
{
	std::cout << "Copy AMateria constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria& rhs)
{
	std::cout << "Assignement operator overload" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "Destructor AMateria called" << std::endl;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria use on " << target.getName() << std::endl;
}


std::string const & AMateria::getType() const
{
	return (type);
}
