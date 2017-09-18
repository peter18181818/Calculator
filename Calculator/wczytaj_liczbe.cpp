#include <iostream>
#include <conio.h>
#include "wczytaj_liczbe.h"
#include <math.h>
using namespace std;

float wczytaj_pierwsza_liczbe()
{
    float x;
    bool spr1;
    do
    {
        cout << "Podaj pierwsza liczbe: ";
        cin.clear();
        cin.sync();
        cin >> x;
        spr1 = cin.good();
        if (spr1 == 0)
            cout << "Podales niewlasciwy znak" << endl;
    }while (spr1 == 0);

    return x;
}

float wczytaj_druga_liczbe()
{
    float y;
    bool spr2;

    do
    {
        cout << "Podaj druga liczbe: ";
        cin.clear();
        cin.sync();
        cin >> y;
        spr2 = cin.good();
        if (spr2 == 0)
            cout << "Podales niewlasciwy znak" << endl;
    }while (spr2 == 0);

        return y;
}

int wybierz_dzialanie()
{
    int wybor;

    cout << endl << "Wybierz numer dzialania, ktore chcesz wykonac: " << endl;
    cout << "1 - DODAWANIE" << endl << "2 - ODEJMOWANIE" << endl << "3 - MNOZENIE" << endl << "4 - DZIELENIE" << endl
    << "5 - POTEGOWANIE" << endl << "6 - PIERWIASTKOWANIE" << endl << "7 - ANULUJ WYBOR i WYBIERZ NOWE LICZBY" << endl << "8 - ZAKONCZ PROGRAM" << endl << endl;

    do
    {
        cin.clear();
        cin.sync();
        cin >> wybor;
        if ((cin.good() != 1) || (wybor < 1) || (wybor > 8))
            cout << "Nie ma takiego dzialania" << endl << "Wybierz numer dzialania, ktore chcesz wykonac: ";
    } while ((cin.good() != 1) || (wybor < 1) || (wybor > 8));

    return wybor;
}

void obliczenia(float a, float b, int wybor)
{
    switch(wybor)
    {
        case 1:
            cout << endl << a << " + " << b << " = " << a+b << endl << endl;
            break;
        case 2:
            cout << endl << a << " - " << b << " = " << a-b << endl << endl;
            break;
        case 3:
            cout << endl << a << " * " << b << " = " << a*b << endl << endl;
            break;
        case 4:
            if (b==0)
                cout << "Nie mozna dzielic przez zero !" << endl << endl;
            else
                cout << endl << a << " / " << b << " = " << a/b << endl << endl;
                break;
        case 5:
            cout << endl << a << " do potegi " << b << " = " << pow(a,b) << endl << endl;
            break;
        case 6:
            cout << endl << "Pierwiastek kwadratowy z " << a << " = " << sqrt(a) << endl;
            cout << "Pierwiastek kwadratowy z " << b << " = " << sqrt(b) << endl << endl;
            break;
        case 7:
            cout << "Wybor anulowany" << endl << endl;
            break;
        case 8:
            cout << endl <<"PROGRAM ZAKONCZONY" << endl;
            break;
    };
}
