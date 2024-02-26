/*
(PT-BR)
Exercício 2:
Escreva um programa que leia um vetor de até 50 números reais e calcule o desvio padrão
destes valores. 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float vet[50], desvio_padrao, soma=0, media;

    printf("How many values? ");
    scanf("%d", &n);

    printf("Enter the values:\n");
    for (i=0; i<n; i++)
        scanf("%f", &vet[i]);

    for (i=0; i<n; i++)
        soma += vet[i];

    media = soma/n;

    soma = 0;
    for (i=0; i<n; i++)
        soma += pow(vet[i] - media, 2.0);

    desvio_padrao = sqrt((1.0/(n-1))*soma);

    printf("%f", desvio_padrao);

    return 0;
}
