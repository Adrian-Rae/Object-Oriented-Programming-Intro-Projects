#include "matrix.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

//misc
int charToInt(char input){
	stringstream s;
	s<<input;
	int output;
	s>>output;
	return output;	
}


//cosntructors/destructor
matrix::matrix(string file){
	size = 0;
	
	// open file
	fstream inputfile;
	inputfile.open(file.c_str());
	
	//read size
	inputfile>>size;
	
	//create matrix rows
	mat = new int* [size];
	for(int p=0; p<size; p++){	
		string row = "";
		inputfile>>row;
		int L = row.size(); 
		
		//create and fill columns
		mat[p] = new int [size];
		for (int i=0; i<L; i++){
			mat[p][i] = charToInt(row[i]);			
		}		
	}
	
	//close
	inputfile.close();
}

matrix::~matrix(){
	//get sum
	int sum = 0;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			sum += mat[i][j];
		}
	}
	 //deallocate;
	 for(int p=0; p<size; p++)
	 	delete [] mat[p];
	 delete [] mat;
	 
	 //display
	 cout<<"matrix sum: "<<sum<<endl;	
}

//operators
matrix& matrix::operator+(matrix* add){
	//check to dsee if the same size
	if (this->size == add->size){
		//element wise operation
		for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				this->mat[i][j] += add->mat[i][j];
			}	
		}
	}
	else{
		//nothing
	}
	return *this;	
}

matrix& matrix::operator-(matrix* sub){
	//check to dsee if the same size
	if (this->size == sub->size){
		//element wise operation
		for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				this->mat[i][j] -= sub->mat[i][j];
			}	
		}
	}
	else{
		//nothing
	}
	return *this;	
}

matrix& matrix::operator/(matrix* div){
	//check to dsee if the same size
	if (this->size == div->size){
		//element wise operation
		for(int i=0; i<size; i++){
			for(int j=0; j<size; j++){
				this->mat[i][j] /= div->mat[i][j];
			}	
		}
	}
	else{
		//nothing
	}
	return *this;	
}

//accessors

void matrix::displayRow(int r){
	stringstream s("");
	for(int i=0; i<size; i++){
		if (i<size-1)
			s<<mat[r][i]<<",";
		else s<<mat[r][i]<<endl;		
	}
	cout<<s.str();
}

void matrix::displayColumn(int c){
	stringstream s("");
	for(int i=0; i<size; i++){
		if (i<size-1)
			s<<mat[i][c]<<",";
		else s<<mat[i][c]<<endl;		
	}
	cout<<s.str();
}

