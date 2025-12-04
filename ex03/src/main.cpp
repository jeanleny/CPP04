#include <Character.hpp>
#include <Ice.hpp>
#include <Cure.hpp>

int main ()
{
	ICharacter *oui = new Character("michel");
	AMateria *glagla = new Cure();
	glagla->use(*oui);
	delete oui;
	delete glagla;
}
