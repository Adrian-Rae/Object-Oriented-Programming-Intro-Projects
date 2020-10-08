#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <string>
#include <iostream>
using namespace std;

class ingredient{
	private:
		string name;
		double price;
		int weight;
		
	public:
		//constructor 
		ingredient(string,double,int);
		//destructor
		~ingredient();
		//operators
		friend ostream& operator<<(ostream&, const ingredient&);
		//accessors
		int getWeight();
		string getName();
		double getPrice();
};

#endif
