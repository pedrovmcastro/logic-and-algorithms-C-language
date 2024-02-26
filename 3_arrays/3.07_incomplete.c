/*
Exercício 7:
Faça um programa que leia duas sequências de números inteiros ordenados e salve cada
sequência em um vetor. Suponha que o número máximo de elementos de uma sequência é
50. Escreva um programa para intercalar os valores dos dois vetores em um terceiro vetor,
em ordem crescente.
Exemplo:
v1 = [1, 3, 5, 5, 7, 9, 10]
v2 = [2, 2, 4, 6, 8, 8, 10]
v3 = [1, 2, 2, 3, 4, 5, 5, 6, 7, 8, 8, 9, 10, 10]
*/

#include <stdio.h>

int main() {

    int a[50], a[50], a[100];
    int tam1, tam2, j=0;

    printf("How many values in the first array? ");
    scanf("%d", &tam1);

    printf("How many values in the second array? ");
    scanf("%d", &tam2);

    if (tam1 > 50 || tam2 > 50) {
        printf("Too many values (max=50).");
        return 1;
    }

    //Input values in the array:
    printf("Enter the values for the first array:\n");
    scanf("%d", a[0]);
    for(int i=1; i<tam1; i++) {
        scanf("%d", &arr1[i]);
        if (arr1[i] < arr1[i-1]){
            printf("The values need to sorted");
            return 1;
        }
    }

    printf("Enter the values for the second array:\n");
    scanf("%d", a[0]);
    for(int i=1; i<tam2; i++) {
        scanf("%d", &a[i]);
        if (a[i] < a[i-1]){
            printf("The values need to sorted");
            return 1;
        }
    }
}