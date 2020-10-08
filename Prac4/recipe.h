#ifndef RECIPE_H
#define RECIPE_H

#include "ingredient.h"

#include <string>
#include <iostream>
using namespace std;

class recipe{
	private:
		ingredient** ingredients;
		int size;
		
	public:
		//constructor 
		recipe(int);
		//destructor
		~recipe();
		//operators
		friend ostream& operator<<(ostream&, const recipe&);
		recipe& operator+(ingredient*);
		ingredient& operator[](int);
};

#endif
