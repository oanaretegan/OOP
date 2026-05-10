using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tema_2_
{
    class ProdusNou : Produs
    {
        protected float ValoareEnergetica { get; set; }
        public string DataIntroducerii { get; set; }
        public void Afisare(int Stoc)
        {
            Console.WriteLine($"Produsul are in stoc {Stoc} bucati (Polimorfism static)\n");
            D.AfisareDetalii();
            Console.WriteLine();
        }
        public override void Afiseaza ()
        {
            Console.WriteLine("Produs din clasa <<ProdusNou>> (Polimorfism dinamic)\n");
            D.AfisareDetalii();
            Console.WriteLine();
        }
        public override void Afis()
        {
            Console.WriteLine("Produs din clasa <<ProdusNou>> (Interfata)\n");
        }
    }
}
