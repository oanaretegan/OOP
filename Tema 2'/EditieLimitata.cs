using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tema_2_
{
    class EditieLimitata : ProdusVechi
    {
        public string DataFinalOferta { get; set; }
        public int NrProdusePeClient { get; set; }
        public void Afisare(char C)
        {
            Console.WriteLine($"Produsul are caracterul de identificare {C} (Polimorfism static)\n");
            D.AfisareDetalii();
            Console.WriteLine();
        }
        public override void Afiseaza()
        {
            Console.WriteLine("Produs din clasa <<EditieLimitata>> (Polimorfism dinamic)\n");
            D.AfisareDetalii();
            Console.WriteLine();
        }
        public override void Afis()
        {
            Console.WriteLine("Produs din clasa <<EditieLimitata>> (Interfata)\n");
        }
    }
}
