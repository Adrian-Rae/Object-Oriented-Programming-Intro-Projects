#include "ingredient.h"

#include <string>
#include <iostream>
using namespace std;

//constructor
ingredient::ingredient(string n,double p, int w):name(n),price(p),weight(w){}

//destructor
ingredient::~ingredient(){
	cout << name << " removed"<<endl;
}

//operator
ostream& operator<<(ostream& output, const ingredient& t){
	output<<"Name: "<<t.name<<endl;
	output<<"Cost: "<<t.price<<endl;
	output<<"Weight: "<<t.weight<<endl;
	return output;
}

//accessors
string ingredient::getName(){
	return name;
}

double ingredient::getPrice(){
	return price;
}

int ingredient::getWeight(){
	return weight;
}
