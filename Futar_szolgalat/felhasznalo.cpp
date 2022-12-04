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
    system("cls");
    cout << "Mi alapján keres?\n  1. ettermek neve\n  2. etteremek kategoriaja\n  3. megsem\n" << endl;
    int keresesiFelt = 3;
    cin >> keresesiFelt;

    if (keresesiFelt == 1 || keresesiFelt == 2)
    {
        cout << "Kerem adja meg a keresni kivant kifejezest: ";
        string kifejezes = "";
        cin >> kifejezes;

        ifstream inputFajl("ettermek.txt");
        if (inputFajl.is_open())
        {
            string sor;
            map<string, string> inputMap;
            while (getline(inputFajl, sor))
            {
                string elem;
                istringstream iss(sor);
                bool bMapKey = false;
                string mapKey, mapValue;
                while (getline(iss, elem, ';'))
                {
                    if (bMapKey == false)
                    {
                        mapKey = elem;
                        bMapKey = true;
                    }
                    else
                    {
                        mapValue = elem;
                    }
                }
                inputMap[mapKey] = mapValue;
            }
            
            inputFajl.close();

            for (auto i : inputMap)
            {
                if (keresesiFelt == 1)
                {
                    if (kifejezes == i.first)
                    {
                        cout << i.first << " (" << i.second << ")" << endl;
                    }
                }
                if (keresesiFelt == 2)
                {
                    //cout << (kifejezes == i.second) << i.first;
                    if (kifejezes == i.second)
                    {
                        cout << i.first << endl;
                    }
                }
            }
            
        }
        else cout << "Baj az etteremek.txt megnyitasakor!";
    }
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

