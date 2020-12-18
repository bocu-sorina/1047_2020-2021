#include "Programator.h"

Programator::Programator(int varsta, string nume, const char* telefon, string limbajProgramare, double salariu)
	:Persoana(varsta, nume, telefon, salariu)
{
	this->limbajProgramare = limbajProgramare;
}
