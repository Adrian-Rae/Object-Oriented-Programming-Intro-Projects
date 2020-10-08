#ifndef MATRIX_H
#define MATRIX_H
#include <string>
using namespace std;

class matrix{
	private:
		int size;
		int** mat;
	public:
		//constructors/destructors
		matrix(string file);
		~matrix();
		//operators
		matrix& operator+(matrix* add);
		matrix& operator-(matrix* sub);
		matrix& operator/(matrix* div);
		//accessors
		void displayRow(int r);
		void displayColumn(int c);
	
	
};

#endif
