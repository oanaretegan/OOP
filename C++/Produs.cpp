#include "Produs.h"
#include <string.h>
#include <iostream>
using namespace std;

void Produs::DateDistribuitor(string n, string a)
{
	d.nume = n;
	d.adresa = a;
}
void Produs::afisare()const
{
	cout << "Produs din clasa de baza(Polimorfism static)" << endl;
	cout << endl;
}
void Produs::afisare(string nume)const
{
	cout << "Produsul " << nume << " din clasa de baza <<Produs>>(Polimorfism static)"<<endl;
	d.afisareDetalii();
	cout << endl;
}

void Produs::afiseaza() const
{
	cout << "Produs din clasa <<Produs>>(Polimorfism dinamic)" << endl;
d.afisareDetalii();
	cout << endl;
}
Produs::~Produs() { }

void Produs::afis()const
{
	cout << "Produs din clasa Produs(Interfata)" << endl;
	cout << endl;
}
/*void Produs::DateProdus(string name, int cant, double p, int uVandute, string dataExp, float g)
{
	cout << name<<":"<<endl;
	cout << "Cantitate initiala: " << cant << " bucati " << endl;
	cout << "Pret: " << p<< " lei" << endl;
	cout << "Unitati vandute: " << uVandute << endl;
	cout << "Incasari: " << p*uVandute << " lei" << endl;
	cout << "Data expirarii: " << dataExp<< endl;
	cout << "Grame/Produs " << g << endl;
}
void Produs:: DateDistribuitor(string n, string a)
{
	d.nume = n;
	d.adresa = a;
}*/
/*int Produs::produseActive = 0;
Produs::Produs()
{
	cout << "Constructor fara parametrii" << endl;
	++produseActive;
}
Produs::Produs(string name, int cant, double p)
{
	nume = name;
	cantitate = cant;
	pret = p;
	cout << "Constructor cu 3 parametrii"<<endl;
	++produseActive;
}
Produs::Produs(string name, int cant, double p, int uVandute, string dataExp)
{
	nume = name;
	cantitate = cant;
	pret = p;
	unitatiVandute = uVandute;
	dataExpirarii = dataExp;
	cout << "Constructor cu 5 parametrii" << endl;
	++produseActive;
}
Produs::~Produs()
{
	cout << "Destructor apelat de catre " << nume << endl;
	--produseActive;
}

Produs::Produs(string name, int uVandute) : nume{ name }, unitatiVandute{ uVandute }
{
	cout << "Constructor care foloseste lista de initializare cu 2 parametrii" << endl;
	++produseActive;
}
Produs::Produs(string name, double p, int uVandute) : nume{ name }, pret{ p }, unitatiVandute{ uVandute }
{
	cout << "Constructor care foloseste lista de initializare cu 3 parametrii" << endl;
	++produseActive;
}
Produs::Produs(string name, double p, int c, string dataExp) : nume{ name }, pret{ p }, cantitate{ c }, dataExpirarii{ dataExp }
{

}
Produs::Produs(string name) : Produs { name,0,0,"Unknown"}
{
	cout << "Constructor cu 1 parametru care foloseste delagarea de constructori" << endl;
	++produseActive;
}
Produs::Produs(string name, double p,string d) : Produs{name,p,0,d}
{
	cout << "Constructor cu 3 parametru care foloseste delagarea de constructori" << endl;
	++produseActive;
}
void Produs::set_incasari(double incasari)
{
	this->incasari = incasari;
}
double Produs::get_incasari()
{
	return incasari;
}
int Produs::get_nrProdActive()
{
	return produseActive;
}
*/


/*void Produs::set_cantitate(int c)
{
	cantitate = c;
}
int Produs::get_cantitate()
{
	return cantitate;
}

void Produs::set_pret(float p)
{
	pret = p;
}
float Produs::get_pret()
{
	return pret;
}

void Produs::set_unitatiVandute(int u)
{
	unitatiVandute = u;
}
int Produs::get_unitatiVandute()
{
	return unitatiVandute;
}

void Produs::set_incasari(float i)
{
	incasari = i;
}
float Produs::get_incasari()
{
	return incasari;
}

void Produs::set_dataExpirarii(string d)
{
	dataExpirarii = d;
}
string Produs::get_dataExpirarii()
{
	return dataExpirarii;
}*/
