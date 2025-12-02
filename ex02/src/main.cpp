#include <Animal.hpp>
#include <Cat.hpp>
#include <Dog.hpp>
#include <WrongAnimal.hpp>
#include <WrongCat.hpp>

int	main(void)
{
	//IMPOSSIBLE
	//Animal animal;
	//Animal beast = new Animal();
	//Animal oui = new Cat();
	//Cat	non = new Animal();
	std::cout << "\n[BASIC TESTS]" << std::endl;
	std::cout << "\n --Constructors--" << std::endl;
	std::cout << "\nCat\n" << std::endl;
	Cat chato;
	std::cout << std::endl;
	Cat felixoss;
	std::cout << std::endl;
	felixoss = chato;
	std::cout << std::endl;
	Cat catido(felixoss);
	std::cout << "\nDog\n" << std::endl;
	Dog dogo;
	std::cout << std::endl;
	Dog dogito;
	std::cout << std::endl;
	dogo = dogito;
	std::cout << std::endl;
	Dog dogitogodo(dogo);
	std::cout << std::endl;
	
	std::cout << "\n --Sounds--" << std::endl;
	chato.makeSound();
	felixoss.makeSound();
	dogo.makeSound();
	dogito.makeSound();

	std::cout << "\n --Types--" <<std::endl;
	std::cout << "chato type " << chato.getType() << std::endl;
	std::cout << "dogo type " << dogo.getType() << std::endl;

	std::cout << "\n[ARRAY TESTS]" << std::endl;
	Animal *herd[6];
	int	k;
	int	constructor = 0;
	int	destructor = 0;
	for (k = 0; k < 3; k++)
	{
		herd[k] = new Cat();
		herd[k]->makeSound();
		std::cout << std::endl;
		constructor++;
	}
	for (k = 3; k != 6; k++)
	{
		herd[k] = new Dog();
		herd[k]->makeSound();
		std::cout << std::endl;
		constructor++;
	}
	for (k = 0; k < 3; k++)
	{
		delete herd[k];
		destructor++;
	}
	for (k = 3; k != 6; k++)
	{
		delete herd[k];
		destructor++;
	}
	std::cout << "constructor : " << constructor << std::endl; 
	std::cout << "destructor : " << destructor << std::endl; 

	std::cout << "\n --Destructors--" << std::endl;
}
