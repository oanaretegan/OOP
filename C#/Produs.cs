using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http.Headers;
using System.Text;
using System.Threading.Tasks;

namespace Tema_2_
{
    class Produs : IProdusInterfata
    {
        private int Cantitate { get; set; }
        private int UnitatiVandute { get; set; }
        private double Pret { get; set; }
        private double Incasari { get; set; }
        private string DataExpirarii { get; set; }
        public float Masa { get; set; }
        public string Nume { get; set; }
        protected string TaraImport { get; set; }
        protected Distribuitor D { get; set; }

        public void DateDistribuitor(string Dnume, string Dadresa)
        {
            D = new Distribuitor { Nume = Dnume, Adresa = Dadresa };
        }

        public void Afisare()
        {
            Console.WriteLine("Produs din clasa de baza (Polimorfism static)\n");
        }

        public void Afisare(string nume)
        {
            Console.WriteLine($"Produsul {nume} din clasa de baza <<Produs>> (Polimorfism static)\n");
            D.AfisareDetalii();
            Console.WriteLine();
        }

        public virtual void Afiseaza()
        {
            Console.WriteLine("Produs din clasa <<Produs>> (Polimorfism dinamic)\n");
            D.AfisareDetalii();
            Console.WriteLine();
        }

        public virtual void Afis()
        {
            Console.WriteLine("Produs din clasa <<Produs>> (Interfata)\n");
        }
    }
}




