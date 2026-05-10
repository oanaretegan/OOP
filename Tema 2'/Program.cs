using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tema_2_
{
    class Program
    {
        static void Main(string[] args)
        {
            // Polimorfism static
            Produs Iaurt = new Produs();
            Iaurt.DateDistribuitor("Alax", "Str. Independentei nr.15");

            ProdusVechi Jeleuri = new ProdusVechi();
            Jeleuri.DateDistribuitor("Sweet Treats", "Str. 1 Decembrie nr.101");

            ProdusNou Ciocolata = new ProdusNou();
            Ciocolata.DateDistribuitor("CiocoLove", "Str. Avram Iancu nr. 202");

            EditieLimitata CremaFistic = new EditieLimitata();
            CremaFistic.DateDistribuitor("I LOVE DUBAI", "str. Grigore cel Mare nr. 12");

            Distribuitor GLS = new Distribuitor
            {
                Nume = "GLS",
                Adresa = "Bulevardul Muncii nr. 1"
            };
            Iaurt.Afisare();
            Iaurt.Afisare("Iaurt");
            Jeleuri.Afisare(225.5f);
            Ciocolata.Afisare(1024);
            CremaFistic.Afisare('f');

            // Polimorfism dinamic
            Produs p1 = new Produs();
            Produs p2 = new ProdusNou();
            Produs p3 = new ProdusVechi();
            Produs p4 = new EditieLimitata();

            p1.DateDistribuitor("Alx", "Str. Independentei nr.100");
            p2.DateDistribuitor("Altex", "Str. Vaii nr.15");
            p3.DateDistribuitor("Sameday", "Str. Victorie nr.105");
            p4.DateDistribuitor("Cargus", "Bulevardul 1 Decembrie 1918 nr.12");

            p1.Afiseaza();
            p2.Afiseaza();
            p3.Afiseaza();
            p4.Afiseaza();

            // Interfață
            p1.Afis();
            p2.Afis();
            p3.Afis();
            p4.Afis();
        }
    }
}
