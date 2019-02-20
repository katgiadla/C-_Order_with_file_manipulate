#include "View.h"
#include "Produkt.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void View::print(produkt& przyklad)
{
	cout << "Licznik: " << setw(1) << "| " << "Nr produktu: " << setw(5) << "| " << "Nazwa: " << setw(5) << "| " << "Cena: " << endl;
	cout << "--------------------------------------------" << endl;
	cout << przyklad.id_licznik << setw(9) << "| " << przyklad.ilosc_licznik << setw(16) << "| " << przyklad.nazwa << setw(6) << "| " << przyklad.cena << "PLN" << endl;
}

View::View(){}

View::~View(){}
