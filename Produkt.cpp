#include "Produkt.h"

produkt::produkt()
{
	id_licznik++;
	ilosc_licznik++;
}

produkt::~produkt()
{
	ilosc_licznik--;
}
