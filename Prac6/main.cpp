#include "vehicle.h"
#include "dieselLocomotive.h"
//remove on Linux
#include "vehicle.cpp"
#include "dieselLocomotive.cpp"

#include <iostream>
using namespace std;

int main(){
	
	//=============================================
	//	Vehicle Class Tests
	//=============================================
	
	/*
	vehicle* train = new vehicle();
	train->setName("frontier Express");
	train->setMap("map1.txt");
	
	int span = train->getSize();
	
	cout<<"SIZE "<<train->getSize()<<endl;
	cout<<"NAME "<<train->getName()<<endl;
	cout<<"MAP AT (1,1) "<<train->getMapAt(1,1)<<endl;
	
	char** map = train->getMap();
	for (int i=0; i<span; i++){
		for (int j=0; j<span; j++){
			cout<<map[i][j];
		}
		cout<<endl;
	}
	//*/
	
	//=============================================
	//	Locomotive Class Tests
	//=============================================
	
	dieselLocomotive* train = new dieselLocomotive();
	train->setName("Frontier Express");
	train->setMap("map1.txt");
	
	int span = train->getSize();
	
	cout<<"SIZE "<<train->getSize()<<endl;
	cout<<"NAME "<<train->getName()<<endl;
	cout<<"MAP AT (1,1) "<<train->getMapAt(1,1)<<endl;
	
	
	char** map = train->getMap();
	for (int i=0; i<span; i++){
		for (int j=0; j<span; j++){
			cout<<map[i][j];
		}
		cout<<endl;
	}
	
	train->setPassengerLimit(100);
	
	train->determineRouteStatistics();

	delete train;
	
	
	
	return 0;
}
