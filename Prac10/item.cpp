#include "item.h"
#include <string>
#include <iostream>
using namespace std;
	
	template <class T>
	item<T>::item(T t){
		data = t;
		next = NULL;
	}
	
	template <class T>
	item<T>::~item(){
		next = NULL;
		cout<<data<<":Item Deleted"<<endl;
	}
	
	template <class T>
	T item<T>::getData(){
		return data;
	}
