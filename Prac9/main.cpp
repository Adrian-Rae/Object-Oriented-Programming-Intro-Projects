#include "stackNode.h"

#include "resrcStack.cpp"

/*/ take out on Linux
#include "stackNode.cpp"
//*/


#include <iostream>
using namespace std;
	
	void FAIL(string reason){
		cout << "<IF FAIL HERE> check "<<reason<<endl;	
	}
	
	void OUTPUT(string O){
		cout<<"<OUTPUT> should read "<<O<<endl;
	}
	
	int main(){
		
		cout << "============StackNode Test================="<<endl<<endl;
		
		FAIL("stackNode constructor");
		stackNode<string>* A = new stackNode<string>("Laptops",1);
		stackNode<string>* B = new stackNode<string>("Desktops",3);
		cout << A->next << "/" << B->next << endl;
		OUTPUT("'0/0'");
		cout<<endl;
	
		FAIL("getResrc/getQuantity");
		cout<< A->getResrc() << "/" << A->getQuantity()<<endl;
		OUTPUT("'Laptops/1'");
		cout<<endl;
		
		FAIL("next variable");
		A->next = B;
		cout<< A->next->getResrc() << "/" << A->next->getQuantity()<<endl;
		OUTPUT("'Desktops/3'");
		cout<<endl;
		
		FAIL("stackNode destructor");
		delete A;
		delete B;
		OUTPUT("'Resource Unit Destroyed', for 2 lines");
		cout<<endl;
		
		cout<<endl<<"=============resrcStack Test========================"<<endl<<endl;
		
		//make nodes
		stackNode<string>* C = new stackNode<string>("Unrefined Ores",3500);
		stackNode<string>* D = new stackNode<string>("Refined Alloys",30000);
		stackNode<string>* E = new stackNode<string>("Precious Metals",50);
		stackNode<string>* F = new stackNode<string>("Spices",3);
		
		//make stack
		FAIL("constructor");
		resrcStack<string>* STACK = new resrcStack<string>();
		cout<<endl;
		
		//push first item
		FAIL("push");
		STACK->push(F);
		cout<<endl;
		
		//print
		FAIL("print");
		STACK->print();
		OUTPUT("'Resource: Spices'");
		OUTPUT("'Quantity: 3'");
		cout<<endl;
		
		//Requirements for small load
		FAIL("determineTransportRequirement");
		string CASE = STACK->determineTransportRequirement();
		cout<<CASE<<endl;
		OUTPUT("'drone'");
		cout<<endl;
		
		//push 2nd item
		FAIL("push");
		STACK->push(E);
		cout<<endl;
		
		//print
		FAIL("print");
		STACK->print();
		OUTPUT("'Resource: Precious Metals'");
		OUTPUT("'Quantity: 50'");
		OUTPUT("'Resource: Spices'");
		OUTPUT("'Quantity: 3'");
		cout<<endl;
		
		//peek at top entry
		FAIL("peek");
		stackNode<string>* HOLD = STACK->peek();
		cout<<HOLD->getResrc()<<endl;
		OUTPUT("'Precious Metals'");
		HOLD = NULL;
		cout<<endl;
		
		
		//Requirements for medium load
		FAIL("determineTransportRequirement");
		CASE = STACK->determineTransportRequirement();
		cout<<CASE<<endl;
		OUTPUT("'car'");
		cout<<endl;
		
		//push 3rd item
		FAIL("push");
		STACK->push(D);
		cout<<endl;
		
		//print
		FAIL("print");
		STACK->print();
		OUTPUT("'Resource: Refined Alloys'");
		OUTPUT("'Quantity: 30000'");
		OUTPUT("'Resource: Precious Metals'");
		OUTPUT("'Quantity: 50'");
		OUTPUT("'Resource: Spices'");
		OUTPUT("'Quantity: 3'");
		cout<<endl;
		
		//Requirements for large load
		FAIL("determineTransportRequirement");
		CASE = STACK->determineTransportRequirement();
		cout<<CASE<<endl;
		OUTPUT("'train'");
		cout<<endl;
		
		//pop and print
		FAIL("pop/print");
		STACK->pop();
		OUTPUT("'Resource Unit Destroyed'");
		STACK->print();
		OUTPUT("'Resource: Precious Metals'");
		OUTPUT("'Quantity: 50'");
		OUTPUT("'Resource: Spices'");
		OUTPUT("'Quantity: 3'");
		cout<<endl;
		
		//push last item
		FAIL("push");
		STACK->push(C);
		cout<<endl;
		
		//print
		FAIL("print");
		STACK->print();
		OUTPUT("'Resource: Unrefined Ores'");
		OUTPUT("'Quantity: 3500'");
		OUTPUT("'Resource: Precious Metals'");
		OUTPUT("'Quantity: 50'");
		OUTPUT("'Resource: Spices'");
		OUTPUT("'Quantity: 3'");
		cout<<endl;
		
		//delete 
		FAIL("destructor");
		delete STACK;
		OUTPUT("'Resource Unit Destroyed', for 3 lines");
		cout<<endl;
		
		cout<<"=========END OF TEST================="<<endl;
		
		
		
		
		
		
		
		
		
		return 0;
	}


