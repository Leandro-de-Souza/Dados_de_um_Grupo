#include <stdio.h>

int main(){

    int N, i, quanth, quantm;
    double menora, maiora, media, soma;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    double alturas[N];
    char generos[N];

    for (int i = 0; i < N; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i + 1);
        scanf(" %c", &generos[i]);
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

    printf("Menor altura = %.2lf\n", menora);
    printf("Maior altura = %.2lf\n", maiora);
    printf("Media das alturas das mulheres = %.2lf\n", media);
	printf("Numero de homens = %d\n", quanth);

    return 0;
}
