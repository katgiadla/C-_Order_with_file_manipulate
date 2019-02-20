#pragma once
#include <iostream>
#include "Produkt.h"

using namespace std;

class produkt;

class View
{
public:
	static void print(produkt&);
public:
	View();
	~View();
};