#pragma once
#include "View.h"
#include "Produkt.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class produkt;

class File
{
public:
	static void save(produkt&);
	File();
	~File();
};