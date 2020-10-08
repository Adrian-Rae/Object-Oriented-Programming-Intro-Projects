#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class vehicle{
	private:
		char** map;
		string name;
		int size;	
	public:
		vehicle();
		
		void setName(string s);
		void setMap(string s);
		
		int getSize();
		string getName();
		char** getMap();
		char getMapAt(int x, int y);
		
	virtual	~vehicle();
	virtual	void operator--();
	virtual	void determineRouteStatistics();
		
};
#endif
