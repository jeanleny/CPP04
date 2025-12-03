#include <AMateria.hpp>

class Cure : public AMateria
{
	public :
	Cure();
	Cure(const Cure& obj);
	Cure& operator=(const Cure& rhs);
	virtual ~Cure();

	Cure* clone() const;

};
