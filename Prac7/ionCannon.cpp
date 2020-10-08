#include "ionCannon.h"

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

	ionCannon::ionCannon(int s):weapon(){
		strength = s;
	}
	
	ionCannon::~ionCannon(){
		cout<<"Ion Cannon Uninstalled!"<<endl;	
	}
	
	string ionCannon::fire(){
		int A = getAmmo();
		if (A > 0){
			
			A--;
			setAmmo(A);
			
			int ST = strength;
			strength++;
			
			stringstream s; 
			s << "Ion Cannon fired at strength: " << ST;
			string OUT = s.str();
			return OUT;						
		}
		else throw ammoOut();
	}
	
	int ionCannon::getStrength(){
		return strength;
	}
	
	void ionCannon::setStrength(int s){
		strength = s;
	}
