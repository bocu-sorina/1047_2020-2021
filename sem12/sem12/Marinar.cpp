#include "Marinar.h"

Marinar::Marinar(int varsta, string nume, const char* telefon, int orePeMare, double salariu)
	:Persoana(varsta, nume, telefon, salariu)
{
	this->orePeMare = orePeMare;
}
