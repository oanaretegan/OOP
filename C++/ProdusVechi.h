#pragma once
#include <iostream>
#include "Produs.h"
using namespace std;
class ProdusVechi:public Produs
{
 public:
	 string dataIndisponibilitate;
	 int PerioadaDisponibilitate;
	 void afisare(float grame)const;
	 void afiseaza() const override;
	 void afis() const override;
};