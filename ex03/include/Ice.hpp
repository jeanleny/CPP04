#pragma once

#include <AMateria.hpp>

class Ice : public AMateria
{
	public :
	Ice();
	Ice(const Ice& obj);
	Ice& operator=(const Ice& rhs);
	virtual ~Ice();

	Ice* clone() const;
	void	use(ICharacter& target);
};
