#include "weaponMount.h"
#include "railRifle.h"
#include "ionCannon.h"
#include "weapon.h"

//*/take out on LINUX ==================
#include "weaponMount.cpp"
#include "railRifle.cpp"
#include "ionCannon.cpp"
#include "weapon.cpp"
//*/

#include <string>
#include <iostream>
using namespace std;


int main(){
	cout<<"ION CANNON TEST START"<<endl;
	
	ionCannon* C1 = new ionCannon(5);
	cout<<"strength is "<<C1->getStrength()<<endl;
	
	C1->setAmmo(1);
	cout<<"ammo is "<<C1->getAmmo()<<endl;
	C1->setType("Ion Cannon");
	cout<<"type is "<<C1->getType()<<endl;
	
	try{
		cout<<C1->fire()<<endl;
		cout<<"strength is now "<<C1->getStrength()<<endl;
		cout<<"ammo is now "<<C1->getAmmo()<<endl;	
	}
	catch(ammoOut& A){
		cout<<"caught exception"<<endl;
		cout<<A.what()<<endl;
	}
	
	cout<<"ION CANNON TEST END"<<endl<<endl;
	
	cout<<"RAIL RIFLE TEST START"<<endl;
	
	railRifle* C2 = new railRifle();
	
	C2->setAmmo(0);
	cout<<"ammo is "<<C2->getAmmo()<<endl;
	C2->setType("Rail Rifle");
	cout<<"type is "<<C2->getType()<<endl;
	
	try{
		cout<<C2->fire()<<endl;
		cout<<"ammo is now "<<C2->getAmmo()<<endl;	
	}
	catch(ammoOut& A){
		cout<<"caught exception"<<endl;
		cout<<A.what()<<endl;
	}
	
	cout<<"RAIL RIFLE TEST END"<<endl<<endl;
	
	//===============Mount Test==================================//
	cout<<"MOUNT TEST START"<<endl;
	int n = 4;
	string s[4] = {"Ion Cannon","NIKS", "Rail Rifle", "Rail Rifle"};
	weaponMount* M = new weaponMount(n,s);
	
	try{
		weapon* R = M->accessWeapon(1);
		cout<<"accessed"<<endl;
	}
	catch(weaponFailure& F){
		cout<<"Exception Caught"<<endl;
		cout<<F.what()<<endl;
		
	}
	
	
	cout<<"MOUNT TEST END"<<endl<<endl;
	
	return 0;
}


