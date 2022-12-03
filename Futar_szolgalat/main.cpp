#include "felhasznalo.h"
#include "felhasznalotarolo.h"
#include <iostream>
#include <list>

using namespace std;

int main()
{
	FelhasznaloTarolo tarolo = FelhasznaloTarolo();
    Felhasznalo felhasznalo = Felhasznalo();
	int input = 0;
	do
	{

		felhasznalo.menuListaz();
		cout << endl;
		cin >> input;
		switch (input)
		{
		case 1: {
			cout << "Adja meg az emailt: ";
			string email;
			cin >> email;
			cout << endl << "Adja meg a jelszot: ";
			string jelszo;
			cin >> jelszo;
			felhasznalo.regisztracio(email, jelszo);
			tarolo.felhasznaloHozzaad(felhasznalo);
			break;
		}
		case 2: {

			cout << "Adja meg az emailt: ";
			string email;
			cin >> email;
			cout << endl << "Adja meg a jelszot: ";
			string jelszo;
			cin >> jelszo;
			felhasznalo.belepes(email, jelszo);
			break;
		}
		case 3: {
			felhasznalo.kereses();
			break;
		}
		default:
			break;
		}
	} while (input!=4);

}

