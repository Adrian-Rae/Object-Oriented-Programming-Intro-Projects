#include "dLL.h"
#include "item.h"

//*/ take out on linux
#include "dLL.cpp"
#include "item.cpp"		
//*/

#include <iostream>
using namespace std;

	int main(){
		
		cout<<
		"======================================"<<endl<<
		"Item Test"<<endl<<
		"======================================"<<endl;
		/*/
		item<int>* A = new item<int>(1);
		item<int>* B = new item<int>(2);
		item<int>* C = new item<int>(3);
		
		A->prev = NULL;
		A->next = B;
		
		B->prev = A;
		B->next = NULL;
		
		
		item<int>* traverse = A->next;
		cout<<"The Data in this item is:"<<traverse->getData()<<endl;
		
		delete A, delete B, delete C;
		//*/
		
		cout<<
		"======================================"<<endl<<
		"DLL Test"<<endl<<
		"======================================"<<endl;
		
		//*/
		item<int>* A = new item<int>(2);
		item<int>* B = new item<int>(2);
		item<int>* C = new item<int>(3);
		item<int>* D = new item<int>(1);
		
		dLL<int> LL;
		LL.push(A);
		LL.push(B);
		LL.push(C);
		LL.push(D);
		cout<<"The Size of the list: "<<LL.getSize()<<endl;
		
		cout<<"Printing:"<<endl;
		LL.printList();
		
		int pos = 2;
		item<int>* CASE = LL.getItem(pos);
		cout<<"The thing in pos "<<pos<<" is: "<<CASE->getData()<<endl;
		
		CASE = LL.getHead();
		cout<<"The thing in head is: "<<CASE->getData()<<endl;
		
		CASE = LL.getTail();
		cout<<"The thing in Tail is: "<<CASE->getData()<<endl;
		
		int I = LL.minNode();
		cout<<"The min is: "<<I<<endl;
		
		CASE = LL.pop();
		cout<<"The following item was removed from the head: "<<CASE->getData()<<endl;
		
		cout<<"Printing:"<<endl;
		LL.printList();
		
		
		CASE = NULL;
		delete A, delete B, delete C, delete D;
		//*/
		
		return 0;
	}
