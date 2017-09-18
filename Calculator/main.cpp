#include <iostream>
#include <conio.h>
#include "wczytaj_liczbe.h"
using namespace std;

int main()
{
    float a,b;
    int wybor;

    cout << "KALKUALTOR" << endl << endl;

    do
    {
    a = wczytaj_pierwsza_liczbe();
    b = wczytaj_druga_liczbe();
    wybor = wybierz_dzialanie();
    obliczenia(a,b,wybor);
    } while (wybor != 8);

    getch();
    return 0;
}
