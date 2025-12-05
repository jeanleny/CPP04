#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <ICharacter.hpp>

class Character : public ICharacter
{
	private :
		std::string _name;
	public :
		Character();
		Character(std::string name);
		Character(const Character& obj);
		Character& operator=(const Character& rhs);
		~Character() ;
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		bool held(AMateria& m);
		AMateria *inventory[4];
};

#endif
