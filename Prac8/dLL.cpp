#include "dLL.h"
#include <cstdlib>
#include <iostream>
using namespace std;

	template <class T>	
	dLL<T>::dLL(){
		head = NULL;
		tail = NULL;
		size = 0;		
	}
	
	template <class T>	
	dLL<T>::~dLL(){
		head = NULL;
		tail = NULL;		
	} 
	
	template <class T>
	item<T>* dLL<T>::getHead(){
		return head;	
	}
	
	template <class T>
	item<T>* dLL<T>::getTail(){
		return tail;	
	}
	
	template <class T>
	void dLL<T>::push(item<T>* newItem){
		if (!head){
			newItem->next = NULL;
			newItem->prev = NULL;
			
			head = newItem;
			tail = newItem;
		}
		else{
			item<T>* temp = head;
			
			temp->prev = newItem;
			newItem->prev = head;
			newItem->next = temp;
			
			head = newItem;
			
			
			temp = NULL;				
		}
		size++;
	}
	
	template <class T>
	void dLL<T>::printList(){
		item<T>* Traverse = head;
		while(Traverse){	
			if (Traverse->next)
				cout<<Traverse->getData()<<",";
			else cout<<Traverse->getData()<<endl;
			Traverse=Traverse->next;
		}
		Traverse = NULL;	
	}
	
	template <class T>
	int dLL<T>::getSize(){
		return size;
	}
	
	template <class T>
	item<T>* dLL<T>::getItem(int i){
		item<T>* Transverse = head;
		for (int p=0; p<i; p++){
			Transverse=Transverse->next;
		}
		return Transverse;
	}
	
	template <class T>
	T dLL<T>::minNode(){
		T min = head->getData();
		item<T>* Transverse = head;
		
		for (int p=0; p<size-1; p++){
			Transverse=Transverse->next;
			if (Transverse->getData() < min)
				min = Transverse->getData();
		}
		return min;
	}
	
	template <class T>
	item<T>* dLL<T>::pop(){
		item<T>* HOLD = head;
		if (head == tail){ //ie one item
			head = NULL;
			tail = NULL;		
		}
		else{
			head = head->next;	
		}
		return HOLD;
	}

	
	
	
	
	
	
