#pragma once
#include <iostream>
#include "View.h"
#include "File.h"
#include <string>

using namespace std;

class View;
class File;

class produkt
{
	friend class View;
	friend class File;
protected:
	static int id_licznik;
	static int ilosc_licznik;
	string nazwa;
	double cena;
public:
	produkt();
	virtual ~produkt();
};
