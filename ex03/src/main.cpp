#include <Character.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>

int main ()
{
	ICharacter *oui = new Character("michel");
	ICharacter *non = new Character("jppmavi");
	AMateria *glagla = new Cure();
	AMateria *glaga = new Cure();
	AMateria *glag = new Cure();
	AMateria *gla = new Cure();
	AMateria *ik = new Ice();

	std::cout << "\n -- Equip Test -- \n" << std::endl;
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

	std::cout << "\n -- Subject Test -- \n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("jeanmi");
	me->equip(tmp);
	ICharacter* bob = (new Character("bob"));
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	std::cout << "\n --Character Copy constructor-- \n" << std::endl;
	Character michel("oui");
	AMateria *ice = (new Ice);
	michel.equip(ice);
	Character andrey(michel);
	andrey.use(0, michel);
	std::cout << "addresses : " << std::endl;
	std::cout << "michel : " << michel.inventory[0] << std::endl;
	std::cout << "andrey : " << andrey.inventory[0] << std::endl;

	return 0;
}
