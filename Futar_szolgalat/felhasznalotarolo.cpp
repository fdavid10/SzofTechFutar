#include "felhasznalotarolo.h"

FelhasznaloTarolo::FelhasznaloTarolo()
{
}

void FelhasznaloTarolo::felhasznaloHozzaad(const Felhasznalo& f)
{
	felhasznalok.push_back(f);
}

static list<list<string>> felhasznaloLista = Felhasznalo::getFajl("felhasznalok.txt");
void FelhasznaloTarolo::felhasznaloBeolvas()
{
	for(auto l : felhasznaloLista){
		vector<string> f(l.begin(),l.end());
		cout << f[0] << " - " << f[1] << " - " << f[2] << endl;
		Felhasznalo felhasznalo(f[0], f[1], f[2]);
		felhasznaloHozzaad(felhasznalo);
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