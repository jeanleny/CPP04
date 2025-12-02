#ifndef CAT_HPP
# define CAT_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal
{
	public :
	Cat();
	Cat(Cat const& obj);
	Cat& operator=(Cat const& rhs);
	~Cat();
	void	makeSound();
	private :
	Brain *brain;
};

#endif
