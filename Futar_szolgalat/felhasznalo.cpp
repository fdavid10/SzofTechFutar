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
	tipus(tipus),
    email(email),
    jelszo(jelszo)
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
       
        list<list<string>> ettermekLista = getFajl("ettermek.txt");

        int index = 1;
        for (auto& l_sor : ettermekLista)
        {
            for (auto it = l_sor.begin(); it != l_sor.end(); it++)
            {
                if (keresesiFelt == 1)
                {
                  
                    //iterator<list<list string>> asd = ettermekLista.begin();
                    if (kifejezes == *it)
                    {
                        auto teszt = it;
                        teszt++;
                        cout << " " << index << ". " << *it << " (" << *teszt << ")" << endl;
                        index++;
                    }
                }
                if (keresesiFelt == 2)
                {
                    if (kifejezes == *it)
                    {
                        auto teszt = it;
                        teszt--;
                        cout << " " << index << ". " << *teszt << endl;
                        index++;
                    }
                }
            }
        }
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
    return tipus + " " + email + " " + jelszo;
}


list<list<string>> Felhasznalo::getFajl(const string& fajlNev)
{
    list<list<string>> fajl;
    ifstream inputFajl(fajlNev);
    if (inputFajl.is_open())
    {

        string sor;
        while (getline(inputFajl, sor))
        {
            list<string> fajlSor;
            string elem;
            list<string> lista;
            istringstream iss(sor);
            while (getline(iss, elem, ',')) // mindehol vesszovel splitelunk!
            {
                fajlSor.push_back(elem);
            }
            fajl.push_back(fajlSor);
        }
        inputFajl.close();
    }
    else cout << "Baj az input fajl meg megnyitasakor!";
    return fajl;
}

/*vector<string> Felhasznalo::sorVisszaAd(const string& fajlNev, const string& keresettSor) const
{
    list<list<string>> fajl = getFajl(fajlNev);
    vector<string> aSor;

    string elem;
    istringstream iss(keresettSor);
    while (getline(iss, elem, ','))
    {
        aSor.push_back(elem);
    }
    bool megtalaltSor = false;
    for (auto& l : fajl)
    {
        int index = 0;
        bool megJo = true;
        for (auto it = l.begin(); it != l.end(); it++)
        {
            if (*it != aSor[index])
            {
                megJo = false;
            }
        }

        if (megJo)
        {
            megtalaltSor = true;
            break;
        }
        index++;
    }

    if (megtalaltSor)
    {
        return aSor;
    }
    return vector<string>();
}*/
