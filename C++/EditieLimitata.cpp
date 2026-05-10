#include "EditieLimitata.h"
#include <iostream>
using namespace std;
void EditieLimitata::afisare(char c) const
{
	cout << "Produsul are caracterul de identificare: " << c <<"(Polimorfism static)" << endl;
	d.afisareDetalii();
	cout << endl;
}
void EditieLimitata::afiseaza() const
{
	cout << "Produs din clasa <<EditieLimitata>>(Polimorfism dinamic)" << endl;
	d.afisareDetalii();
	cout << endl;
}
void EditieLimitata::afis()const
{
	cout << "Produs de clasa EditieLimitata (Interfata)" << endl;
	cout << endl;
}