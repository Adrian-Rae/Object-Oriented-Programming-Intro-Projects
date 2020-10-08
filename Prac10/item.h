#ifndef ITEM_H
#define ITEM_H
using namespace std;

	template <class T>
	class item{
		private:
			T data;
		public:
			item* next;
			
			item(T t);
			~item();
			T getData();
	};
#endif
