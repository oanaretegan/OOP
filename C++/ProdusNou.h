#pragma once
#include <iostream>
#include "Produs.h"
using namespace std;
class ProdusNou:public Produs
{
protected:
	float valoareEnergetica;
public:
	
	string dataIntroducerii;
	void afisare(int stoc)const;
	void afiseaza() const override;
	void afis() const override;
};
/*void set_vE(float e);
	float get_vE();*/