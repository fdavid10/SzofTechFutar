#pragma once
#include <list>
#include "felhasznalo.h"

class RegVasarlo : public Felhasznalo
{
	string telefon;
	string vNev;
	string kNev;
	string lakcim;
	list<string> kosar;
public:
	RegVasarlo();
	void regisztracio(const string& email, const string& jelszo, const string& telefon, const string& vNev, const string& kNev, const string& lakcim);
	void menuListaz() const;
	const string& kiir() const;
	void setTelefon(const string& _telefon);
	void setVNev(const string& _vNev);
	void setLakcim(const string& _kNev);
	void kosarMegjelenit() const;
	void rendeles();
	void rendelesInditas();
	void kosarHozzaad(int index);

};

