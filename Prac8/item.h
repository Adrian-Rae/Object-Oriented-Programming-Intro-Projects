#ifndef ITEM_H
#define ITEM_H
	
	template <class T>
	class item{
		private:
			T data;
		public:
			item(T t);
			~item();
			
			item<T>* next;
			item<T>* prev;
			
			T getData();		
	};

#endif

