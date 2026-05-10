using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tema_2_
{
    class ProdusVechi : Produs
    {
        public string DataIndisponibilitate { get; set; }
        public int DurataDisponibilitate { get; set; }
        public void Afisare(float Grame)
        {
            Console.WriteLine($"Produsul are {Grame} grame (Polimorfism static)\n");
            D.AfisareDetalii();
            Console.WriteLine();
        }
        public override void Afiseaza()
        {
            Console.WriteLine("Produs din clasa <<ProdusVechi>> (Polimorfism dinamic)\n");
            D.AfisareDetalii();
            Console.WriteLine();
        }
        public override void Afis()
        {
            Console.WriteLine("Produs din clasa <<ProdusVechi>> (Interfata)\n");
        }

    }
}
