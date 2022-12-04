#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <list>
#include <map>
#include <sstream> 

using namespace std;

class Felhasznalo
{
protected:
	string email;
	string jelszo;
	string tipus;
public:
	Felhasznalo();
	Felhasznalo(const string& email, const string& jelszo);
	Felhasznalo(const string& tipus, const string& email, const string& jelszo);
	virtual void regisztracio(const string& email, const string& jelszo);
	void kereses() const;
	virtual void menuListaz() const;
	void setEmail(const string& _email);
	void setJelszo(const string& _jelszo);
	const string& getEmail() const;
	const string& getJelszo() const;
	const string& getTipus() const;
	virtual const string& kiir() const;
	~Felhasznalo() {};
};
