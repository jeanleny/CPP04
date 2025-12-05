#ifndef CURE_HPP
# define CURE_HPP

#include <AMateria.hpp>
#include <ICharacter.hpp>

class Cure : public AMateria
{
	public :
	Cure();
	Cure(const Cure& obj);
	Cure& operator=(const Cure& rhs);
	virtual ~Cure();

	Cure*				clone() const;
	void				use(ICharacter& target);
	std::string const & getType() const;
};

#endif
