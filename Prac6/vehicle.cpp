#include "vehicle.h"

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

vehicle::vehicle(){
	//niks
}

int vehicle::getSize(){
	return size;
}

void vehicle::setName(string s){
	name = s;
}

string vehicle::getName(){
	return name;
}

char** vehicle::getMap(){
	return map;
}

void vehicle::setMap(string s){
	fstream INFILE;
	INFILE.open(s.c_str());
	//get rows
	INFILE >> size;
	
	
	//allocate memory
	map = new char* [size];
	for (int i=0; i<size; i++){
		map[i] = new char [size];
	}
	
	//read into array
	for (int j=0; j<size; j++){
		string ROW;
		INFILE>>ROW;
		for (int k=0; k<size; k++){
			map[j][k] = ROW[k];	
		}
	}	
	
	INFILE.close();	
}

char vehicle::getMapAt(int x, int y){
	return map[x][y];	
}

vehicle::~vehicle(){
	//niks
}

void vehicle::determineRouteStatistics(){
	//niks
}

void vehicle::operator--(){
	
	for (int i=0; i<size; i++){
		delete [] map[i];
	}
	delete [] map;
	map = NULL;	
}




