#ifndef STACKNODE_H
#define STACKNODE_H
using namespace std;

	template<class T>
	class stackNode{
		private:
			T resrc;
			int quantity;
		public:
			stackNode<T>* next;
			
			stackNode(T i, int q);
			~stackNode();
			T getResrc();
			int getQuantity();
	};

#endif
