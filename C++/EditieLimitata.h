#pragma once
#include <iostream>
#include"ProdusNou.h"
using namespace std;
class EditieLimitata:public ProdusNou
{
public:
	string dataFinalOferta;
	int nrProdusePeClient;
	void afisare(char c)const;
	void afiseaza() const override;
	void afis() const override;
};