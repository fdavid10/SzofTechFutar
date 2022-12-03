#pragma once
#include <string> 
#include <iostream>
#include <list>

#include "felhasznalo.h"

using namespace std;

class FelhasznaloTarolo
{
	list<Felhasznalo> felhasznalok;
public:
    FelhasznaloTarolo();
    void felhasznaloHozzaad(const Felhasznalo& f);
    void felhasznaloBeolvas() const;
    void felhasznaloFajlbairas();
    void felhasznaloTorles(const Felhasznalo& f);
    Felhasznalo getFelhasznalo() const;
    void etteremListaz(const string& nev, const string &kategoria);
    void profilModositas(const string& email);
};

