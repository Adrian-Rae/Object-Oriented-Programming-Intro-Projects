#include "ingredient.h"
#include "recipe.h"

#include "ingredient.cpp" //take out on Linux
#include "recipe.cpp"

#include <iostream>
#include <string>

int main(){
	
	/*
	//ingredient test
	cout<<"========constructor test=============="<<endl;
	ingredient* dollop = new ingredient("Five Spice",100.00,5);
	
	cout << "========accessor test=============="<<endl;
	cout<<dollop->getName()<<endl;
	cout<<dollop->getPrice()<<endl;
	cout<<dollop->getWeight()<<endl;
	
	cout<<"========operator test=============="<<endl;
	cout<<*dollop;
	
	cout<<"========destructor test=============="<<endl;
	delete dollop;
	//*/
	
	//recipe test
	cout<<"========constructor test=============="<<endl;
	ingredient* sugar = new ingredient("Sugar",10,10);
	ingredient* flour = new ingredient("flour",5,10);
	ingredient* milk = new ingredient("milk",20,8);
	
	recipe cake(3);
	
	
	cout<<"========Operator+ test=============="<<endl;
	cake=cake+flour;
	cake=cake+milk;
	cake=cake+sugar;
	cout<<"success!"<<endl;
	
	cout<<"========Operator[] test=============="<<endl;
	ingredient temp = cake[1];
	cout<<temp;
	
	cout<<"========Opeartor<< test=============="<<endl;
	cout<<cake;
	
	cout<<"========destructor test=============="<<endl;
	delete sugar;
	delete flour;
	delete milk;
	
	
	return 0;
}
