#include "stackNode.h"
#include <iostream>

using namespace std;
	
	template <class T>
	stackNode<T>::stackNode(T i, int q){
		resrc = i;
		quantity = q;
		next = NULL;
	}
	
	template <class T>
	stackNode<T>::~stackNode(){
		cout<<"Resource Unit Destroyed"<<endl;		
	}
	
	template <class T>
	T stackNode<T>::getResrc(){
		return resrc;	
	}
	
	template <class T>
	int stackNode<T>::getQuantity(){
		return quantity;
	}
