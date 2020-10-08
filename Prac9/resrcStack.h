#ifndef RESRCSTACK_H
#define RESRCSTACK_H

#include "stackNode.h"
#include <string>
using namespace std;

	template <class T>
	class resrcStack{
		private:
			stackNode<T>* top;
		public:
			resrcStack();
			~resrcStack();
			void push(stackNode<T>* t);
			void pop();
			stackNode<T>* peek();
			void print();
			string determineTransportRequirement();	
	};
	
#endif
