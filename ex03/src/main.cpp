#include <Character.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>

int main ()
{
	/*ICharacter *oui = new Character("michel");
	ICharacter *non = new Character("jppmavi");
	AMateria *glagla = new Cure();
	AMateria *glaga = new Cure();
	AMateria *glag = new Cure();
	AMateria *gla = new Cure();
	AMateria *ik = new Ice();

	std::cout << "\nEquip\n" << std::endl;
	oui->equip(glagla);
	oui->equip(glaga);
	oui->equip(ik);
	oui->unequip(8);
	oui->equip(glag);
	oui->unequip(0);
	oui->equip(glag);
	oui->equip(glag);
	oui->equip(glag);
	oui->equip(NULL);
	oui->unequip(0);
	oui->unequip(0);
	oui->equip(gla);
	oui->use(1, *non);
	delete oui;
	delete non;
	delete glagla;
	delete glaga;
	delete glag;
	delete gla;
	delete ik;*/
	/*IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;*/
	IMateriaSource *src = new MateriaSource();
	ICharacter *me = new Character("me");
	//AMateria *tmp;
	AMateria *ice = new Ice();
	src->learnMateria(ice);
	//tmp = src->createMateria("ice");
	//me->equip(tmp);
	//delete src;
	delete ice;
	delete me;
	delete src;

	return 0;
}
