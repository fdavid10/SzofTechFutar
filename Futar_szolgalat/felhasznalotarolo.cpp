#include "felhasznalotarolo.h"

FelhasznaloTarolo::FelhasznaloTarolo()
{}

void FelhasznaloTarolo::felhasznaloHozzaad(const Felhasznalo& f)
{
	felhasznalok.push_back(f);
}

void FelhasznaloTarolo::felhasznaloBeolvas() const
{
	
}

void FelhasznaloTarolo::felhasznaloFajlbairas()
{
	for (auto& i : felhasznalok)
	{
		ofstream beregisztral;
		beregisztral.open("felhasznalok.txt");
		beregisztral << i.kiir() << endl;
		beregisztral.close();
	}
}

void FelhasznaloTarolo::felhasznaloTorles(const Felhasznalo& f)
{
}

Felhasznalo FelhasznaloTarolo::getFelhasznalo() const
{
	return Felhasznalo();
}

 void etteremListaz(const string& nev, const string &kategoria)
 {
 }

 void profilModositas(const string& email) 
 {
 }