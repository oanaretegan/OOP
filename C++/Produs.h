#pragma once
#include <iostream>
#include "Distribuitor.h"
#include "Interfata.h"
using namespace std;
class Produs:public Interfata
{
private:
	///static int produseActive;
	int cantitate, unitatiVandute;
	double pret, incasari;
	string dataExpirarii;
public:
	float masa;
	string nume;
protected:
	string taraImport,categorie;
	Distribuitor d;
public:
	void DateDistribuitor(string n, string a);
	void afisare()const;
	void afisare(string name)const;
	virtual void afiseaza()const;
    virtual ~Produs();
	void afis() const override;

};

	  /*void set_cantitate(int c);
	  int get_cantitate();
	  void set_pret(float p);
	  float get_pret();
	  void set_unitatiVandute(int u);
	  int get_unitatiVandute();
	  void set_incasari(float i);
	  float get_incasari();
	  void set_dataExpirarii(string d);
	  string get_dataExpirarii();*/

      /*Produs(string name, int cant, double p);
	  Produs(string name, int uVandute);
	  Produs(string name, double p, int uVandute);
	  Produs(string name, double p, int c, string dataExp);
	  Produs(string name);
	  Produs(string name, double p,string dataExp);
	  void set_incasari(double incasari);
	  double get_incasari();
	  static int get_nrProdActive();*/

/*void DateProdus(string name, int cant, double p, int uVandute, string dataExp, float g);
	void DateDistribuitor(string n, string a);*/