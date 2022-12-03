#include "felhasznalo.h"

Felhasznalo::Felhasznalo()
{
	jelszo = "";
	email = "";
}

Felhasznalo::Felhasznalo(const string& email, const string& jelszo):
    email(email),
    jelszo(jelszo)
{
}


void Felhasznalo::regisztracio(const string& email, const string& jelszo)
{
    setEmail(email);
    setJelszo(jelszo);
}

void Felhasznalo::belepes(const string& email, const string& jelszo)
{
    
}

void Felhasznalo::kereses() const
{

}

void Felhasznalo::menuListaz() const
{
	cout << "1.) Regisztracio" << endl;
	cout << "2.) Belepes" << endl;
    cout << "3.) Kereses" << endl;
    cout << "4.) Kilepes" << endl;
}

void Felhasznalo::setEmail(const string& _email)
{
    email = _email;
}

void Felhasznalo::setJelszo(const string& _jelszo)
{
	jelszo = _jelszo;
}

const string& Felhasznalo::kiir() const
{
    return email + " " + jelszo;
}

