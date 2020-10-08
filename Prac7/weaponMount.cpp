#include "weaponMount.h"
#include "weapon.h"

#include <string>
using namespace std;

	weaponMount::weaponMount(int NW, string* WL){
		numWeapons = NW;
		
		weapons = new weapon*[numWeapons];
		for (int L1 =0; L1<numWeapons; L1++){
			
			string CWN = WL[L1];
			
			if (CWN == "Ion Cannon")
				weapons[L1] = new ionCannon(5);
			else if (CWN == "Rail Rifle") 
				weapons[L1] = new railRifle();
			else 
				weapons[L1] = NULL;
				
		}
	}
	
	weaponMount::~weaponMount(){
		for (int i=0; i<numWeapons; i++){
			delete weapons[i];
			weapons[i] = NULL;
		}
		delete weapons;
		weapons = NULL;
	}
	
	weapon* weaponMount::accessWeapon(int i){
		if (weapons[i] != NULL)
			return weapons[i];
		else throw weaponFailure(); 
	}
	
	
	//================Exceptions===========================//
	
	const char* weaponFailure::what() const throw(){
		return "Weapon System Failure!";		
	}
