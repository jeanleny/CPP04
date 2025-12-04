#include <Character.hpp>
#include <Ice.hpp>
#include <Cure.hpp>

int main ()
{
	ICharacter *oui = new Character("michel");
	AMateria *glagla = new Cure();
	AMateria *glaga = new Cure();
	AMateria *glag = new Cure();
	AMateria *gla = new Cure();
	AMateria *ik = new Ice();

	oui->equip(glagla);
	oui->equip(glaga);
	oui->equip(ik);
	oui->unequip(8);
	oui->equip(glag);
	oui->equip(gla);
	delete oui;
	delete glagla;
	delete glaga;
	delete glag;
	delete gla;
	delete ik;
}
