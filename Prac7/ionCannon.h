#ifndef IONCANNON_H
#define IONCANNON_H

#include "weapon.h"

using namespace std;

	class ionCannon : public weapon{
		private:
			int strength;
			
		public:
			ionCannon(int s);
			~ionCannon();
			
			void setStrength(int s);
			
			int getStrength();
			
			string fire();
	
	};
	
#endif
