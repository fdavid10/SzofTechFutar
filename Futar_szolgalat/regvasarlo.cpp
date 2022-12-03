#include "regvasarlo.h"

RegVasarlo::RegVasarlo():Felhasznalo()
{
	telefon = "";
	vNev = "";
	kNev = "";
	lakcim = "";
}

void RegVasarlo::regisztracio(const string& email, const string& jelszo, const string& telefon, const string& vNev, const string& kNev, const string& lakcim)
{
	Felhasznalo::regisztracio(email, jelszo);
	setTelefon(telefon);
	setvNev(vNev);
	setkNev(kNev);
	setLakcim(lakcim);
}

void RegVasarlo::menuListaz() const
{
}

const string& RegVasarlo::kiir() const
{
	// TODO: insert return statement here
}

void RegVasarlo::setTelefon(const string& _telefon)
{
	telefon = _telefon;
}

void RegVasarlo::setvNev(const string& _vNev)
{
	vNev = _vNev;
}

void RegVasarlo::setkNev(const string& _kNev)
{
	kNev = _kNev;
}

void RegVasarlo::setLakcim(const string& _lakcim)
{
	lakcim = _lakcim;
}

void RegVasarlo::kosarMegjelenit() const
{
}

void RegVasarlo::rendeles()
{
}

void RegVasarlo::rendelesInditas()
{
}

void RegVasarlo::kosarHozzaad(int index)
{
}

