#include "recipe.h"
#include "ingredient.h"
#include <string>
#include <iostream>
using namespace std;

//constructor
recipe::recipe(int s){
	size = s;
	ingredients = new ingredient* [size];
	for(int i=0; i<size; i++){
		ingredients[i] = NULL; //set spaces blank
	}
	cout<<"size set to "<<size<<endl;
}

//destructor
recipe::~recipe(){
	for(int i=0; i<size; i++){
		delete ingredients[i];
		ingredients[i] = NULL;	
	}
	delete [] ingredients;
	ingredients = NULL;
}

//operators
ostream& operator<<(ostream& output, const recipe& t){
	for(int i=0; i<t.size; i++){
		output<<*(t.ingredients[i]);
	}
	return output;
};

recipe& recipe::operator+(ingredient* add){

	for(int i=0; i<size; i++){
		if (this->ingredients[i] == NULL){
			this->ingredients[i] = new ingredient(add->getName(),add->getPrice(),add->getWeight());
			break;
		}
	}
	return *this;
}

ingredient& recipe::operator[](int i){
	if ((i<0)||(i>=size)){
		cout<<"Out of Bounds"<<endl;		
	}
	else{
		return *ingredients[i];	
	}
};
