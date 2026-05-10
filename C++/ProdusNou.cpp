#include "ProdusNou.h"
#include <iostream>
using namespace std;

void ProdusNou::afisare(int stoc) const
{
	cout << "Produsul are in stoc "<<stoc<<" bucati(Polimorfism static)"<< endl;
	d.afisareDetalii();
	cout << endl;
}
void ProdusNou::afiseaza() const
{
	cout << "Produs din clasa <<ProdusNou>>(Polimorfism dinamic)" << endl;
	d.afisareDetalii();
	cout << endl;
}
void ProdusNou::afis() const
{
	cout << "Produs de clasa ProdusNou (Interfata)" << endl;
	cout << endl;
}

/*void ProdusNou::set_vE(float e)
{
	valoareEnergetica = e;
}
float ProdusNou::get_vE()
{
	return valoareEnergetica;
}*/