#ifndef WEAPONMOUNT_H
#define WEAPONMOUNT_H

#include "weapon.h"
#include "ionCannon.h"
#include "railRifle.h"

#include <exception>
#include <string>
using namespace std;

class weaponMount{
	private:
		weapon** weapons;
		int numWeapons;
	public:
		weaponMount(int numWeapons, string* weaponList);
		~weaponMount();
		weapon* accessWeapon(int i);
				
}; 

struct weaponFailure : public exception{
	public:
		const char* what() const throw();	
};

#endif
