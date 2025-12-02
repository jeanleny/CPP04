#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int	main(void)
{
	std::cout << "\n --Constructors--" << std::endl;
	Cat *chato = new Cat();
	Dog *chiengue = new Dog();
	Animal *bestiolass = new Animal();
	Animal *Animaldog = new Dog(*chiengue);
	Animal *Animalcat = new Cat(*chato);
	WrongAnimal *chelou = new WrongAnimal();
	WrongAnimal *mutant = new WrongCat();
	
	std::cout << "\n --Sounds--" << std::endl;
	chato->makeSound();
	chiengue->makeSound();
	bestiolass->makeSound();
	Animaldog->makeSound();
	Animalcat->makeSound();
	chelou->makeSound();
	mutant->makeSound();

	std::cout << "\n --Types--" <<std::endl;
	std::cout << "chato type " << chato->getType() << std::endl;
	std::cout << "chiengue type " << chiengue->getType() << std::endl;
	std::cout << "bestiolass type " << bestiolass->getType() << std::endl;
	std::cout << "Animaldog type " << Animaldog->getType() << std::endl;
	std::cout << "Animalcat type " << Animalcat->getType() << std::endl;
	std::cout << "chelou type " << chelou->getType() << std::endl;
	std::cout << "mutant type " << mutant->getType() << std::endl;

	std::cout << "\n --Destructors--" << std::endl;
	delete chato;
	delete chiengue;
	delete bestiolass;
	delete Animaldog;
	delete Animalcat;
	delete chelou;
	delete mutant;
}
