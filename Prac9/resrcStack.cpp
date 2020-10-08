#include "resrcStack.h"
#include "stackNode.cpp"

#include <iostream>
using namespace std;
	
	template <class T>
	void printNode(stackNode<T>* t){
		cout<<	"Resource: " << t->getResrc()<<endl;
		cout<<	"Quantity: " <<	t->getQuantity()<<endl;
	}
	
	template <class T>
	resrcStack<T>::resrcStack(){
		top = NULL;	
	}
	
	template <class T>
	resrcStack<T>::~resrcStack(){
		stackNode<T>* prev;
		stackNode<T>* cur;
		
		if(top){
			cur=top; prev=cur;
			while(cur->next){
				cur = cur->next;
				delete prev;
				prev = cur;
			}
		delete cur;
		}
		
		cur = NULL;
		prev = NULL;			
	}
	
	template <class T>
	void resrcStack<T>::push(stackNode<T>* t){
		if (!top){
			top = t;
		}
		else{
			stackNode<T>* lastAdded = top;
			top = t;
			t->next = lastAdded;	
		}		
	}
	
	template <class T>
	void resrcStack<T>::pop(){
		if (!top){
			cout<<"EMPTY"<<endl;
		}
		else{
			if(top->next){
				stackNode<T>* hold = top->next;
				delete top;
				top = hold;
				hold = NULL;	
			}
			else{
				delete top;
				top = NULL;
			}	
		}
	}
	
	template <class T>
	stackNode<T>* resrcStack<T>::peek(){
		return top;	
	}
	
	template <class T>
	void resrcStack<T>::print(){
		if(top){
			stackNode<T>* traverse = top;
			printNode(traverse); //print first
			while(traverse->next){ //print rest
				traverse = traverse->next;
				printNode(traverse);
			}
			traverse = NULL;		
		}
		else{
			//nothing
		}	
	}
	
	template <class T>
	string resrcStack<T>::determineTransportRequirement(){
		int quantityAccumulator = 0, nodeAccumulator = 0;
		string MODE = "LOGISTICS ERROR";
		
		//determine nodes/quantity if necessary
		if(top){
			
			stackNode<T>* Transverse = top; //first node
			nodeAccumulator++;
			quantityAccumulator += Transverse->getQuantity();
			
			while(Transverse->next){
				Transverse=Transverse->next;
				nodeAccumulator++;
				quantityAccumulator += Transverse->getQuantity();
			}
			
			if (quantityAccumulator > 100){
				MODE = "train";
			}
			else if ( (quantityAccumulator > 50) && (nodeAccumulator <= 10) ){
				MODE = "car";
			}
			else if ( nodeAccumulator <= 5){
				MODE = "drone";
			}	
		}
		
		return MODE;
			
	}
	
	
	
	
	
	
