#include "item.h"

#include <iostream>
using namespace std;
	
	template <class T>
	item<T>::item(T t){
		data = t;
		next = NULL;
		prev = NULL;	
	}
	
	template <class T>
	item<T>::~item(){
		cout<<"Item Deleted"<<endl;
	}
	
	template <class T>
	T item<T>::getData(){
		return data;
	}
