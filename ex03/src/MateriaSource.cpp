#include <MateriaSource.hpp>
#include <Ice.hpp>
#include <Cure.hpp>

MateriaSource::MateriaSource() : memory()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj): memory()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (obj.memory[i])
			memory[i] = obj.memory[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	(void)obj;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;\
	for (int i = 0; i < 4 ; i++)
	{
		if (memory[i])
			delete memory[i];
	}
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "wrong materia" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (m && !memory[i])
		{
			memory[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (memory[i] && memory[i]->getType() == type)
			return (memory[i]);
	}
	std::cout << "Unkown " << type << " materia" << std::endl;
	return (0);
}
