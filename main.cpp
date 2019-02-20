#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "Produkt.h"
#include "Jab³ko.h"
#include "Maslo.h"

using namespace std;

int produkt::id_licznik = 0;
int produkt::ilosc_licznik = 0;

int main()
{
	int ilosc_produktow = 10;
	produkt** zamowienie = new produkt*[ilosc_produktow];
	
	int ile_jablek = 0;
	srand(time(NULL));
	ile_jablek = (rand() % 9) + 0;
	for (int i = 0; i < ile_jablek; i++)
	{
		zamowienie[i] = new Jablko;
		View::print(*zamowienie[i]);
		File::save(*zamowienie[i]);
	}	
	int ile_masla = ilosc_produktow - ile_jablek;
	for (int i = 0; i < ile_masla; i++)
	{
		zamowienie[i] = new maslo;
		View::print(*zamowienie[i]);
		File::save(*zamowienie[i]);
	}

	system("PAUSE");
	return 0;
}