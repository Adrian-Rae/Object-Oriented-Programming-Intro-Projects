#include "item.h"
#include "rLL.h"
#include "rLL.cpp"
#include <iostream>
#include <string>
using namespace std;
	
	
	void TITLE(string s){
		cout<<s<<endl;
	}
	
	void SB(){
		cout<<"[NO RUNTIME ERROR]"<<endl<<endl;
	}
	
	int main(){
		
		TITLE("<ITEM CONSTRUCTION>");
		item<int>* A = new item<int>(1);
		item<int>* B = new item<int>(2);
		item<int>* C = new item<int>(3);
		item<int>* D = new item<int>(4);
		item<int>* E = new item<int>(5);
		SB();
		
		/*/
		delete A;
		delete B;
		delete C;
		delete D;
		delete E;
		//*/
		
		TITLE("<LIST CONSTRUCTION>");
		rLL<int>* LIST = new rLL<int>();
		SB();
		
		TITLE("<getSize>");
		cout<<"Size with no elements: "<<LIST->getSize()<<endl;
		SB();
		
		TITLE("<push> first item");
		LIST->push(A);
		SB();
		
		TITLE("<getHead> should display '1'");
		item<int>* TEMP = LIST->getHead();
		cout<<"HEAD DATA is: "<<TEMP->getData()<<endl;
		SB();
		
		TITLE("<push> second item");
		LIST->push(B);
		SB();
		
		TITLE("<print> whole list - should show '1,2'");
		LIST->recursivePrint(TEMP);	
		SB();
		
		TITLE("<getSize>");
		cout<<"Size with 2 elements: "<<LIST->getSize()<<endl;
		SB();
		
		TITLE("<recursiveDelete> deleting second element, should show '2:Item Deleted'");
		LIST->recursiveDelete(TEMP->next);
		SB();
		
		TITLE("<push> Third item");
		LIST->push(C);
		TITLE("<push> Fourth item");
		LIST->push(D);
		TITLE("<push> Fifth item");
		LIST->push(E);
		SB();
		
		TITLE("<print> whole list - should show '1,3,4,5'");
		TEMP=LIST->getHead();
		LIST->recursivePrint(TEMP);	
		SB();
		
		TITLE("<getSize>");
		cout<<"Size with 4 elements: "<<LIST->getSize()<<endl;
		SB();
		
		TITLE("<pop> should show '1'");
		TEMP = LIST->pop();
		cout <<"DATA of popped node: "<< TEMP->getData()<<endl;;
		SB();
		
		TITLE("<delete> Should delete 3 items - 3/4/5");
		delete LIST;
		SB();	
		
		
		return 0;
	}
