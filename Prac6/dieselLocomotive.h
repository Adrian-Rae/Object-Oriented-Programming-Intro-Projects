#ifndef LOCO_H
#define LOCO_H

#include "vehicle.h"
using namespace std;

class dieselLocomotive : public vehicle {
	private:
		int passengerLimit;
	public:
		dieselLocomotive();
		~dieselLocomotive();
		
		int getPassengerLimit();
		
		void setPassengerLimit(int s);
		void determineRouteStatistics();
		 	
};

#endif
