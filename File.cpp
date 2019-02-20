#include "File.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

void File::save(produkt& przyklad)
{
	ofstream out;
	out.open("zamowienie.txt", ios::app);
	if (!out.good())
		return;
	out << "Licznik: " << setw(1) << "| " << "Nr produktu: " << setw(5) << "| " << "Nazwa: " << setw(5) << "| " << "Cena: " << endl;
	cout << "------------------------------------" << endl;
	out <<  przyklad.id_licznik << setw(9) << "| " << przyklad.ilosc_licznik << setw(16) << "| " << przyklad.nazwa << setw(6) << "| " << przyklad.cena <<"PLN" << endl;
	out.close();
}

File::File(){}

File::~File(){}
