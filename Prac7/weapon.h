#ifndef WEAPON_H
#define WEAPON_H

#include <exception>
#include <string>
using namespace std;

class weapon{
	private:
		int ammo;
		string type;
	public:
		weapon();
		weapon(int a, string t);
		
		int getAmmo();
		string getType();
		
		void setAmmo(int s);
		void setType(string s);
		
		virtual ~weapon();
		virtual string fire()=0;
};

struct ammoOut : public exception{
	public:
		const char* what() const throw();
};

#endif
