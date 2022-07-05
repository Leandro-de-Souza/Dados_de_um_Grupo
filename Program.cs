using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_DADOS_PESSOAS {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, i, quanth, quantm;
            double menora, maiora, media, soma;

            Console.Write("Quantas pessoas serao digitadas? ");
            N = int.Parse(Console.ReadLine());

            double[] alturas = new double[N];
            char[] generos = new char[N];

            for (i = 0; i < N; i++) {
                Console.Write("Altura da " + (i + 1) + "a pessoa: ");
                alturas[i] = double.Parse(Console.ReadLine(), CI);
                Console.Write("Genero da " + (i + 1) + "a pessoa: ");
                generos[i] = char.Parse(Console.ReadLine());
            }

            menora = alturas[0];
            maiora = alturas[0];

            for (i = 1; i < N; i++) {
                if (alturas[i] > maiora) {
                    maiora = alturas[i];
                }
                if (alturas[i] < menora) {
                    menora = alturas[i];
                }
            }

            quanth = 0;
            quantm = 0;
            soma = 0;

            for (i = 0; i < N; i++) {
                if (generos[i] == 'M') {
                    quanth = quanth + 1;
                }
                else {
                    quantm = quantm + 1;
                    soma = soma + alturas[i];
                }
            }

            media = soma / quantm;

            Console.WriteLine("Menor altura = " + menora.ToString("F2", CI));
            Console.WriteLine("Maior altura = " + maiora.ToString("F2", CI));
            Console.WriteLine("Media das alturas das mulheres = " + media.ToString("F2", CI));
            Console.WriteLine("Numero de homens = " + quanth);

        }
    }
}
