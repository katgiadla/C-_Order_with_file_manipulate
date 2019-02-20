#include "Jab³ko.h"
#include <ctime>
#include <stdlib.h>

using namespace std;

Jablko::Jablko(): produkt()
{
	nazwa = "Antonowka";
	cena = (rand()%3) + 0.5;
}

Jablko::~Jablko(){}
