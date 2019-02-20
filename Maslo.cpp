#include "Maslo.h"
#include <ctime>
#include <stdlib.h>

using namespace std;

maslo::maslo()
{
	nazwa = "Oselka";
	cena = (rand() % 3) + 4.0;
}

maslo::~maslo(){}
