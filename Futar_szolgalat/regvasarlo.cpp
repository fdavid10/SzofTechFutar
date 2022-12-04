#include "regvasarlo.h"

RegVasarlo::RegVasarlo() :Felhasznalo()
{
	telefon = "";
	vNev = "";
	kNev = "";
	lakcim = "";
}

void RegVasarlo::regisztracio(const string& email, const string& jelszo)
{
	Felhasznalo::regisztracio(email, jelszo);
}

void RegVasarlo::menuListaz() const
{
	cout << "1.) Kereses" << endl;
	cout << "2.) Belepes" << endl;
	cout << "3.) Kosar megtekintese" << endl;
	cout << "4.) Profil modositasa" << endl;
	cout << "5.) Profil torlese" << endl;
	cout << "6.) Kilepes" << endl;
}

const string& RegVasarlo::kiir() const
{
	return "";
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

void RegVasarlo::profilModositas()
{
}

void RegVasarlo::profilTorles()
{
}

