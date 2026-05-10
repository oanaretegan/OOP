using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tema_2_
{
    class Distribuitor
    {
        public string Nume { get; set; }
        public string Adresa { get; set; }
        public void AfisareDetalii()
        {
            Console.WriteLine($"Produsul este distribuit de {Nume} care are adresa: {Adresa}");
        }
    }
}
