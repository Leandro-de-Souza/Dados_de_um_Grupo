#include <bits/stdc++.h>

using namespace std;

int main()
{

       int N, i, quanth, quantm;
       double menora, maiora, media, soma;

       cout << "Quantas pessoas serao digitadas? ";
       cin >> N;

       double alturas[N];
       char generos[N];

       for (int i = 0; i < N; i++) {
            cout << "Altura da " << i + 1 << "a pessoa: ";
            cin >> alturas[i];
            cout << "Genero da " << i + 1 << "a pessoa: ";
            cin >> generos[i];
       }

    menora = alturas[0];
    maiora = alturas[0];

    for (int i = 1; i < N; i++) {
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

    for (int i = 0; i < N; i++) {
        if (generos[i] == 'M') {
            quanth = quanth + 1;
        }
        else {
            quantm = quantm + 1;
            soma = soma + alturas[i];
        }
    }

    media = soma / quantm;

    cout << "Menor altura = " << menora << endl;
    cout << "Maior altura = " << maiora << endl;
    cout << fixed << setprecision(2);
    cout << "Media das alturas das mulheres = " << media << endl;
    cout << "Numero de homens = " << quanth << endl;


    return 0;
}
