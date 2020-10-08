#include "railRifle.h"

#include <string>
using namespace std;

	railRifle::railRifle():weapon(){
		//niks
	}
	
	railRifle::~railRifle(){
		cout<<"Rail Rifle Uninstalled!"<<endl;
	}
	
	string railRifle::fire(){
		int A = getAmmo();
		if (A > 0){
			
			A--;
			setAmmo(A);
			
			return "Rail Rifle Fired!";						
		}
		else throw ammoOut();
	}
	
	
