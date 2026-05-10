#include <iostream>
#include "Produs.h"
#include "ProdusVechi.h"
#include "ProdusNou.h"
#include "EditieLimitata.h"
#include "Interfata.h"
using namespace std;

int main()
{
	///polimorfism static
	Produs Iaurt;
	Iaurt.DateDistribuitor("Alax", "Str. Independentei nr.15");
	ProdusVechi Jeleuri;
	Jeleuri.DateDistribuitor("Sweet Treats", "Str. 1 Decembrie nr.101");
	ProdusNou Ciocolata;
	Ciocolata.DateDistribuitor("CiocoLove", "Str. Avram Iancu nr. 202");
	EditieLimitata CremaFistic;
	CremaFistic.DateDistribuitor("I LOVE DUBAI", "str. Grigore cel Mare nr. 12");
	Distribuitor GLS;
	GLS.nume = "GLS";
	GLS.adresa = "Bulevardul Muncii nr. 1";

	Iaurt.afisare();
	Iaurt.afisare("Iaurt");
	Jeleuri.afisare(225.5);
	Ciocolata.afisare(1024);
	CremaFistic.afisare('f');
	
	///Polimorfism dinamic
	Produs* p1 = new Produs;
	Produs* p2 = new ProdusNou;
	Produs* p3 = new ProdusVechi;
	Produs* p4 = new EditieLimitata;
	p1->DateDistribuitor("Alx", "Str. Independentei nr.100");
	p2->DateDistribuitor("Altex", "Str. Vaii nr.15");
	p3->DateDistribuitor("Sameday", "Str. Victorie nr.105");
	p4->DateDistribuitor("Cargus", "Bulevardul 1 Decembrie 1918 nr.12");

	p1->afiseaza();
	p2->afiseaza();
	p3->afiseaza();
	p4->afiseaza();
	

	///Interfata 
	p1->afis();
	p2->afis();
	p3->afis();
	p4->afis();


	delete p1;
	delete p2;
	delete p3;
	delete p4;
	return 0;
}
	
	/*Tema 1
	Produs Iaurt;
	Iaurt.set_cantitate(124);
	Iaurt.set_pret(2.45);
	Iaurt.set_unitatiVandute(57);
	Iaurt.set_incasari((float)2.45 * 57);
	Iaurt.set_dataExpirarii("22/03/2025");

	Produs* Biscuiti = new Produs();
	(*Biscuiti).set_cantitate(512);
	(*Biscuiti).set_pret(3.25);
	(*Biscuiti).set_unitatiVandute(212);
	(*Biscuiti).set_incasari((float)3.25 * 212);
	(*Biscuiti).set_dataExpirarii("13/01/2026");

	cout << "Iaurt: \n";
	cout << "Cantitate initiala: " << Iaurt.get_cantitate() << " bucati " << endl;
	cout << "Pret: " << Iaurt.get_pret() << " lei" << endl;
	cout << "Unitati vandute: " << Iaurt.get_unitatiVandute() << endl;
	cout << "Incasari: " << Iaurt.get_incasari() << " lei" << endl;
	cout << "Data expirarii: " << Iaurt.get_dataExpirarii() << endl;

	cout << endl;

	cout << "Biscuiti: \n";
	cout << "Cantitate initiala: " << (*Biscuiti).get_cantitate() << " bucati" << endl;
	cout << "Pret: " << (*Biscuiti).get_pret() << " lei" << endl;
	cout << "Unitati vandute: " << (*Biscuiti).get_unitatiVandute() << endl;
	cout << "Incasari: " << (*Biscuiti).get_incasari() << " lei" << endl;
	cout << "Data expirarii: " << (*Biscuiti).get_dataExpirarii() << endl;

	delete Biscuiti;*/

	/*Tema 2
	Produs Iaurt{"Iaurt",224,1.43};
	Produs Ciocolata{ "Ciocolata",123,3.54,45,"12/03/2026" };
	cout << endl;
	Produs Cafea{ "Cafea", 214 };
	Produs Cereale { "Cereale", 5.14, 68 };
	cout << endl;
	Produs Ceai{ "Ceai" };
	Produs Cartofi { "Cartofi", 0.98,"22/04/2025"};
	Cereale.set_incasari((double)5.14 * 68);
	cout <<endl<< "Incasarile pentru produsul <<Cereale>> sunt de: " << Cereale.get_incasari() << " lei" <<endl<< endl;
	cout << "Numarul de produse active in acest moment este: " << Produs::get_nrProdActive()<<endl<<endl;
	const Produs Mere{ "Mere",512,2.29 };
	cout << endl;*/
/*Tema 3
	Produs Iaurt;
	Iaurt.DateProdus("Iaurt",224,1.47,102,"22/04/2025",140);
	Iaurt.DateDistribuitor("Alax", "Str. Independentei nr.15");
	cout << endl;
	ProdusVechi Jeleuri;
	Jeleuri.DateProdus("Jeleuri", 28, 2.25, 3, "11/05/2025",95);
	Jeleuri.dataIndisponibilitate = "12/05/2025";
	Jeleuri.PerioadaDisponibilitate = 225;
	Jeleuri.DateDistribuitor("Sweet Treats", "Str. 1 Decembrie nr.101");
	cout << endl;
	ProdusNou Ciocolata;
	Ciocolata.DateProdus("Ciocolata", 1025, 5.65, 0, "06/06/2026",100);
	Ciocolata.dataIntroducerii = "01/05/2025";
	Ciocolata.set_vE(525);
	Ciocolata.DateDistribuitor("CiocoLove", "Str. Avram Iancu nr. 202");
	Ciocolata.afisare();
	cout << endl;
	EditieLimitata CremaFistic;
	CremaFistic.DateProdus("Crema de Fistic ", 400, 13.2, 0, "04/09/2025", 200);
	CremaFistic.dataIntroducerii = "15/04/2025";
	CremaFistic.dataFinalOferta = "01/06/2025";
	CremaFistic.nrProdusePeClient = 5;
	CremaFistic.set_vE(637.2);
	CremaFistic.DateDistribuitor("I LOVE DUBAI", "str. Grigore cel Mare nr. 12");
	CremaFistic.afisare();*/