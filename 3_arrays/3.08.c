/*
Exercício 8:
Faça um programa que calcule o produto interno de dois vetores u e v de mesmo tamanho
n lidos do teclado. O programa deve ler primeiramente o valor de n e em seguida deve
ler duas sequências de mesmo tamanho de números reais e salvar cada sequência em um
vetor. Suponha que o número máximo de elementos de uma sequência é 50. O programa
deve então calcular o produto interno dos vetores lidos.
*/

#include <stdio.h>

int main() 
{
    float u[50], v[50];
    float product=0;
    int n;

    printf("Lenght: ");
    scanf("%d", &n);

    if (n > 50){
        printf("Invalid lenght (max=50)"); return 1;
    }

    printf("Enter the values for the first array:\n");
    for(int i=0; i<n; i++) {
        printf("[%d]: ", i);
        scanf("%f", &u[i]);
    }

    printf("Enter the values for the second array:\n");
    for(int i=0; i<n; i++) {
        printf("[%d]: ", i);
        scanf("%f", &v[i]);
    }

    for(int i=0; i<n; i++) {
        product += u[i]*v[i];
    }

    printf("Product: %.2f\n", product);

    return 0;
}