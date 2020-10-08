#include "tome.h"
#include "tome.cpp"

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
	
	string SpellsA[5] = {"Hoodwink","Flabbergast","Incenero","Floaty","Sploosh"};
	string SpellsB[7] = {"Flippy","Flash","Bake","Gross","Levitas","Shield","Confuse"};
	
	tome* A = new tome("Bane of Ghouls", 5,"Andy Serkis", SpellsA);
	tome* B = new tome("Bane of Werewolves", 7,"Tim", SpellsB);
	
	//test A
	cout 	<< "Size "		<< A->getTomeSize()	<<endl
			<< "GetSpell "	<< A->getSpell(2) 	<<endl
			<< "getName "	<< A->getName() 	<<endl
			<< "getAuthor "	<< A->getAuthor() 	<<endl;
	
	string* outA = A->getReferences();
	for (int i=0; i<A->getTomeSize(); i++){
		cout << outA[i] <<endl;
	}
	
	cout<<*A;
	cout<<endl<<"end test A"<<endl<<endl;
	
	//test B
	cout 	<< "Size "		<< B->getTomeSize()	<<endl
			<< "GetSpell "	<< B->getSpell(2) 	<<endl
			<< "getName "	<< B->getName() 	<<endl
			<< "getAuthor "	<< B->getAuthor() 	<<endl;
	
	string* outB = B->getReferences();
	for (int j=0; j<B->getTomeSize(); j++){
		cout << outB[j] <<endl;
	}
	
	cout<<*A<<*B;
	cout<<endl<<"end test B"<<endl<<endl;
	
	//test = operator
	tome* C = new tome();
	*C = *A;
	
	//test C
	cout 	<< "Size "		<< C->getTomeSize()	<<endl
			<< "GetSpell "	<< C->getSpell(2) 	<<endl
			<< "getName "	<< C->getName() 	<<endl
			<< "getAuthor "	<< C->getAuthor() 	<<endl;
	
	string* outC = C->getReferences();
	for (int k=0; k<C->getTomeSize(); k++){
		cout << outC[k] <<endl;
	}
	cout<<*A<<*B<<*C;
	cout<<endl<<"end test C"<<endl<<endl;
	
	//test D;
	tome* D = new tome();
	*D = *(A)-*(B);
	
		cout << "Size "		<< D->getTomeSize()	<<endl
			<< "GetSpell "	<< D->getSpell(2) 	<<endl
			<< "getName "	<< D->getName() 	<<endl
			<< "getAuthor "	<< D->getAuthor() 	<<endl;
	
	string* outD = D->getReferences();
	for (int l=0; l<D->getTomeSize(); l++){
		cout << outD[l] <<endl;
	}
	
	cout<<*D<<endl;
	
	delete A;
	delete B;
	delete C;
	delete D;
	
	return 0;
}
