#include <Brain.hpp>

Brain::Brain()
{
	std::cout << "Brain constructor Called" << std::endl;
}

Brain::Brain(const Brain& obj) 
{
	std::cout << "Brain copy constructor Called" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		ideas[i] = obj.ideas[i];
}

Brain &Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain assignement operator Called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0 ; i < 100 ; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return(*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
}
