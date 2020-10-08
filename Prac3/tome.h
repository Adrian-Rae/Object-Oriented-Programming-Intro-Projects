#ifndef TOME_H
#define TOME_H

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class tome
{
	private:
		
		string references [10];
		string tomeName;
		string author;
		int spellsStored;
		
	public:	
		
		//constructors
		tome();
		tome(string, int, string);
		tome(string, int, string, string*);
		
		//destructor
		~tome();
		
		//accessors
		int getTomeSize();
		const string getSpell(int);
		string* getReferences();
		string getName();
		string getAuthor();
		
		//operators
		tome operator-(tome&);
		friend ostream& operator<<(ostream&, const tome&);
		void operator=(const tome&);
	
	
};



#endif
