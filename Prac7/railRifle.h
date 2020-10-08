#ifndef RAILRIFLE_H
#define RAILRIFLE_H

#include "weapon.h"

#include <iostream>
#include <string>
using namespace std;

	class railRifle : public weapon{
		public:
			railRifle();
			~railRifle();
			
			string fire();
	};
	
#endif
