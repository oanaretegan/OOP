#include "ProdusVechi.h"
#include <iostream>
using namespace std;
void ProdusVechi::afisare(float grame)const
{
	cout << "Fiecare produs are o greutate de " << grame << " grame/produs(Polimorfism static)" << endl;
	d.afisareDetalii();
	cout << endl;
}

void ProdusVechi::afiseaza() const
{
	cout << "Produs din clasa <<ProdusVechi>>(Polimorfism dinamic)" << endl;
	d.afisareDetalii();
	cout << endl;
}
void ProdusVechi::afis() const
{
	cout << "Produs de clasa ProdusVechi(Interfata)" << endl;
	cout << endl;
}

