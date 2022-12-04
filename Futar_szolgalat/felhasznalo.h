#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <map>
#include <sstream>  
//#include "felhasznalotarolo.h"

using namespace std;

class Felhasznalo
{
protected:
	string email;
	string jelszo;
public:
	Felhasznalo();
	Felhasznalo(const string& email, const string& jelszo);
	virtual void regisztracio(const string& email, const string& jelszo);
	void belepes(const string& email, const string& jelszo);
	void kereses() const;
	virtual void menuListaz() const;
	void setEmail(const string& _email);
	void setJelszo(const string& _jelszo);
	virtual const string& kiir() const;
	~Felhasznalo() {};
};
