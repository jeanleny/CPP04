#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <WrongAnimal.hpp>

class	WrongCat : public WrongAnimal
{
	public :
	WrongCat();
	WrongCat(const WrongCat& obj);
	WrongCat& operator=(WrongCat const& rhs);
	~WrongCat();
};

#endif
