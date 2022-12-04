#include "felhasznalotarolo.h"

FelhasznaloTarolo::FelhasznaloTarolo()
{}

void FelhasznaloTarolo::felhasznaloHozzaad(const Felhasznalo& f)
{
	felhasznalok.push_back(f);
}

void FelhasznaloTarolo::felhasznaloBeolvas()
{
	for (auto& i : felhasznalok)
	{
		ifstream beolvas;
		beolvas.open("felhasznalok.txt");

		while (beolvas.is_open())
		{
			char sor[] = " ";
			beolvas >> sor;

			/*string tipus = strtok(sor, ",");
			string email = strtok(NULL, ",");
			string jelszo = strtok(NULL, ",");
			Felhasznalo f = Felhasznalo(tipus, email, jelszo);
			felhasznaloHozzaad(f);*/ // javítás alatt
		}
	}
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

list<Felhasznalo> FelhasznaloTarolo::getFelhasznalok() const
{
	return felhasznalok;
}

void FelhasznaloTarolo::etteremListaz(const string& nev, const string& kategoria)
{
}

void FelhasznaloTarolo::profilModositas(const string& email)
{
}

Felhasznalo FelhasznaloTarolo::belepes(const string& email, const string& jelszo)
{
	for (auto& i : felhasznalok)
	{
		if (i.getEmail() == email)
		{
			if (i.getJelszo() == jelszo)
			{
				return i;
			}
			else
			{
				throw 0; //rendes kivetel kezeles implenetalasa kesobb 
			}
		}
	}
}

void etteremListaz(const string& nev, const string& kategoria)
{
}

void profilModositas(const string& email)
{
}