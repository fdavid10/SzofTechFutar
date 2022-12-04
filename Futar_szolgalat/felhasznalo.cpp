#include "felhasznalo.h"

Felhasznalo::Felhasznalo()
{
    jelszo = "";
    email = "";
}

Felhasznalo::Felhasznalo(const string& email, const string& jelszo) :
    email(email),
    jelszo(jelszo)
{
}

Felhasznalo::Felhasznalo(const string& tipus, const string& email, const string& jelszo) :
    email(email),
    jelszo(jelszo),
    tipus(tipus)
{
}



void Felhasznalo::regisztracio(const string& email, const string& jelszo)
{
    setEmail(email);
    setJelszo(jelszo);
}

void Felhasznalo::kereses() const
{
    system("cls");
    cout << "Mi alapjan keres?\n  1. ettermek neve\n  2. etteremek kategoriaja\n  3. megsem\n" << endl;
    int keresesiFelt = 3;
    cin >> keresesiFelt;

    if (keresesiFelt == 1 || keresesiFelt == 2)
    {
        cout << "Kerem adja meg a keresni kivant kifejezest: ";
        string kifejezes = "";
        cin >> kifejezes;
        cout << endl;

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
                while (getline(iss, elem, ','))
                {
                    if (!bMapKey)
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

            int index = 1;
            for (auto i : inputMap)
            {
                if (keresesiFelt == 1)
                {
                    if (kifejezes == i.first)
                    {
                        cout << index << ". " << i.first << " (" << i.second << ")" << endl;
                        index++;
                    }
                }
                if (keresesiFelt == 2)
                {
                    if (kifejezes == i.second)
                    {
                        cout << index << ". " << i.first << endl;
                        index++;
                    }
                }
            }
            if (index == 1)
            {
                cout << "A keresett elem nem talalhato\nNyomjon meg egy gombot a visszalepeshez!" << endl;
            }
            cout << endl << endl;
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

const string& Felhasznalo::getEmail() const
{
    return email;
}

const string& Felhasznalo::getJelszo() const
{
    return jelszo;
}

const string& Felhasznalo::getTipus() const
{
    return tipus;
}

const string& Felhasznalo::kiir() const
{
    return "";
}


