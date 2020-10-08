#ifndef RLL_H
#define RLL_H

#include "item.h"
using namespace std;

	template <class T>
	class rLL{
		private:
			item<T>* head;
			int size;
		public:
			rLL();
			~rLL();
			
			item<T>* getHead();
			
			void push(item<T>* newItem);
			
			item<T>* pop();
			
			int getSize();
			
			void recursivePrint(item<T>* c);
			void recursiveDelete(item<T>* node);
	};

#endif
