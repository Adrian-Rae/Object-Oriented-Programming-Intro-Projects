#include "tome.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//implementation

//constructors

	tome::tome(){
		//empty
	}
	
	tome::tome(string name, int tomeSize, string inauthor){
		tomeName = name;
		author = inauthor;
		spellsStored = tomeSize;			
	}
	
	tome::tome(string name, int tomeSize, string inauthor, string* initialList){
		tomeName = name;
		author = inauthor;
		spellsStored = tomeSize;
		for (int i=0; i<spellsStored; i++){
			if ( initialList[i] != ""){
				references[i] = initialList[i];
			}
		}			
	}
	
//destructors
	
	tome::~tome(){
		//empty
	}
	
//accessors

	int tome::getTomeSize(){
		return spellsStored;		
	}
	
	const string tome::getSpell(int i){
		return references[i];
	}
	
	string tome::getName(){
		return tomeName;
	}
	
	string* tome::getReferences(){
		string* sOut = new string[10];
		for(int i=0; i<spellsStored; i++){
			sOut[i] = references[i];
		}
		return sOut;
	}
	
	string tome::getAuthor(){
		return author;
	}
	
//Operators
		
	bool isSpellIn(string name, tome& COMP){
		bool found = false;
		int p = COMP.getTomeSize();
		for (int i=0; i<p; i++){
			if (COMP.getSpell(i) == name){ found = true; }
		}
		return found;
	}
	
	
	tome tome::operator-(tome& sub){
		
		tome C;
		int COUNTER=0, logA=0, logB=0;
		
		//copy unique members of A
		int p = this->spellsStored;
		for (int i=0; i<p; i++){
			string o = this->references[i];
			if (!isSpellIn(o,sub)) {
				//the counter will always be less than ten for the first tome
				logA++;
				COUNTER++;
				C.references[COUNTER-1] = o;
			}			
		}
		
		//copy unique members of B
		int q = sub.spellsStored;
		for (int j=0; j<q; j++){
			string r = sub.references[j];
			if ((!isSpellIn(r,*(this))) && (COUNTER<10)){
				logB++;
				COUNTER++;
				C.references[COUNTER-1] = r;
			}			
		}
		
		//defining Spells Stored
		C.spellsStored = COUNTER;
		
		//deciding name
		if (p <= q)
			{C.tomeName = this->tomeName;}
		else
			{C.tomeName = sub.tomeName;}
			
		//writing authors
		if (logA != 0){
			C.author = this->author;
			if (logB!=0){C.author += ", "+sub.author;
			}
		}
		else 
			{C.author = sub.author;}
			
		
		
		return C;	
	}
	
	ostream& operator<<(ostream& output, const tome& t){
				
		ostream& writeOUT = output;
		
		writeOUT<< "Tome Name: "	<<	t.tomeName		<<endl
				<< "Author: "		<<	t.author		<<endl
				<< "References: ";
		
		
		int p = t.spellsStored;
		for (int i = 0; i < p; i++){
			if ( i != p-1){ writeOUT << t.references[i] << ", "; }
			else {writeOUT << t.references[i] << endl; }	 	
		}
		return writeOUT;
		
	}
	
	void tome::operator=(const tome& oldTome){
		this->tomeName = oldTome.tomeName;
		this->author = oldTome.author;
		this->spellsStored = oldTome.spellsStored;
		
		int p = oldTome.spellsStored;
		for (int i=0; i<p; i++){
			this->references[i] = oldTome.references[i];
		}
	}

