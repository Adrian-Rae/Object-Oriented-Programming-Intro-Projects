#include "rLL.h"
#include "item.cpp"
using namespace std;

	template <class T>
	rLL<T>::rLL(){
		head = NULL;
		size = 0;	
	}
	
	template <class T>
	rLL<T>::~rLL(){
		if(head){
			item<T>* TRAV = head;
			item<T>* PREV = NULL;
			while(TRAV){
				PREV=TRAV;
				TRAV=TRAV->next;
				delete PREV;	
			}
		}	
	}
	
	template <class T>
	item<T>* rLL<T>::getHead(){
		return head;	
	}
	
	template <class T>
	void rLL<T>::push(item<T>* newItem){
		if(!head){
			head = newItem;
			size++;
		}
		else{
			item<T>* TRAV = head;
			while(TRAV->next) TRAV = TRAV->next;
			TRAV->next = newItem;
			size++;
		}
			
	}
	
	template <class T>
	item<T>* rLL<T>::pop(){
		if (head){
			item<T>* HOLD = head;
			head=head->next;
			size--;
			HOLD->next = NULL;
			return HOLD;	
		}	
		else return NULL;
	}
	
	template <class T>
	int rLL<T>::getSize(){
		return size;	
	}
	
	template <class T>
	void rLL<T>::recursivePrint(item<T>* c){	
		
		if(c->next){
			cout<<c->getData()<<",";
			recursivePrint(c->next);	
		}
		else{
			cout<<c->getData()<<endl;
		}		
	}
	
	template <class T>
	void rLL<T>::recursiveDelete(item<T>* START){
		
		//minor change needed to NULL the next member of the previous node in the chain;
		item<T>* REM = head;
		while(REM->next){
			if (REM->next == START){
				REM->next = NULL;
				break;
			}
			else REM=REM->next;
		}
		
		if(START->next){
			item<T>* HOLD = START->next;
			delete START;
			size--;
			recursiveDelete(HOLD);
		}
		else{
			delete START;
			size--;
		}	
	}
	
	
	
