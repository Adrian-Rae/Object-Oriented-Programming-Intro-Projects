#include "matrix.h"
#include "matrix.cpp"
#include <string>
using namespace std;

int main(){
	cout<<endl<<"Matrix A test"<<endl;
	matrix* A = new matrix("mat.txt");
	A->displayRow(0);
	A->displayRow(1);
	A->displayColumn(0);
	A->displayColumn(1);
	
	cout<<endl<<"Matrix B test"<<endl;
	matrix* B = new matrix("mat2.txt");
	B->displayRow(0);
	B->displayRow(1);
	B->displayColumn(0);
	B->displayColumn(1);
	
	cout<<endl<<"Operator Test"<<endl;
	*(A) = *A+B;
	A->displayRow(0);
	A->displayRow(1);
	
	
	return 0;
}
