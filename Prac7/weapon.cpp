#include "weapon.h"

#include <string>
using namespace std;

	weapon::weapon(){
		//niks
	}
	
	weapon::weapon(int a, string s){
		ammo = a;
		type = s;
	}
	
	void weapon::setAmmo(int s){
		ammo = s;
	}
	
	void weapon::setType(string s){
		type = s;
	}
	
	int weapon::getAmmo(){
		return ammo;
	}
	
	string weapon::getType(){
		return type;
	}
	
	weapon::~weapon(){
		//niks
	}
	
	//NO FIRE
	
	//===============Exceptions======================//
	
	const char* ammoOut::what() const throw(){
		return "Ammo Depleted!";
	}
