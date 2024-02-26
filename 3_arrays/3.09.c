/*
(PT-BR)
Exercício 9:
Escreva um programa que leia uma sequência de números inteiros e os salva em um vetor.
Assuma que o tamanho máximo da sequência é 50. Em seguida o programa deve ler
um outro número inteiro C. O programa deve então encontrar dois números de posições
distintas do vetor cuja multiplicação seja C e imprimi-los. Caso não existam tais números,
o programa deve informar isto.
Exemplo: Se vetor = [2, 4, 5, "10, 7] e C = 35 então o programa deve imprimir “5 e 7". Se
C = "1 então o programa deve imprimir “Não existem tais números".
*/

#include <stdio.h>

int main()
{
    int array[50];
    int n, C;
    int productExists=0;  

    printf("Lenght: ");
    scanf("%d", &n);

    if (n > 50){
        printf("Invalid lenght (max=50)"); return 1;
    }

    printf("Enter the values:\n");
    for(int i=0; i<n; i++) {
        printf("[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Enter a value that you want to search in the array: ");
    scanf("%d", &C);

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if (array[i]*array[j] == C) {
                printf("%d and %d.\n", array[i], array[j]);
                productExists = 1;
            }
        }
    }

    if(!productExists) {
        printf("Do not exist these numbers.");
    }

    return 0;
}