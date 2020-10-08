#include "dieselLocomotive.h"

#include <iostream>
using namespace std;

dieselLocomotive::dieselLocomotive(){
	//niks
}

dieselLocomotive::~dieselLocomotive(){
	operator--();
	cout<<"diesel locomotive removed"<<endl;
}

int dieselLocomotive::getPassengerLimit(){
	return passengerLimit;
}

void dieselLocomotive::setPassengerLimit(int s){
	passengerLimit = s;
}

void dieselLocomotive::determineRouteStatistics(){
	char** map = getMap();
	int span = getSize();
	
	int RoutePassengers = 0; //Determine Passengers along Route
	int origin [2] = {0,0};
	int dest [2] = {0,0};
	int distance = 0;
	string status = "Viable";
	
	//general stats
	for (int i=0; i<span; i++){
		for (int j=0; j<span; j++){
			char X = map[i][j];
			switch (X) {
				case 'M': 
					RoutePassengers += 50;
					distance++;
					break;
				case 'N': 
					RoutePassengers += 25;
					distance++;
					break;
				case 'P': 
					RoutePassengers += 10;
					distance++;
					break;
				case 'O': 
					origin[0] = i;
					origin[1] = j;
					break;
				case 'E':
					dest[0] = i;
					dest[1] = j;
					break;
				case '#': 
					distance++;
					break;		
			}			
		}
	}
	
	if (RoutePassengers > passengerLimit) status = "Not Viable";
	
	cout<<
		"Name: "				<< getName()						<<endl<<
		"Origin Coordinates: "	<< origin[0] << ',' << origin[1]	<<endl<<
		"Exit Coordinates: "	<< dest[0] << ',' << dest[1]		<<endl<<
		"Distance: "			<< distance							<<endl<<
		"Passengers Carried: "	<< RoutePassengers					<<endl<<
		"Status: "				<< status							<<endl;
		
	
}
