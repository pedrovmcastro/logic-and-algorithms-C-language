/*
Exercise 5:
Create a program that reads two sequences of distinct integers and saves each
sequence in an array. Assume that the maximum number of elements in a sequence
is 50. Assume that each of these arrays represents a set containing the elements
stored in it. The program should then save in a third array the result of the
intersection of the two initial arrays and print the result.

Example:
arr1: [1, 2, 3, 4, 5]
arr2: [2, 5, 7, 1, -9, 18]
Result: [1, 2, 5]


(PT-BR)
Exercício 5:
Faça um programa que leia duas sequências de números inteiros distintos e salve cada
sequência em um vetor. Suponha que o número máximo de elementos de uma sequência
é 50. Suponha que cada um destes vetores represente um conjunto contendo os elementos
nele armazenados. O programa deve então salvar em um terceiro vetor o resultado da
interseção dos dois primeiros vetores e imprimir o resultado.

Exemplo:
v1: [1, 2, 3, 4, 5]
v2: [2, 5, 7, 1, -9, 18]
Resultado: [1, 2, 5]
*/

#include <stdio.h>

int main()
{
    int i, j, k = 0;
    int arr1[50], arr2[50], result[50];
    int size1, size2;

    // Input data:
    printf("Size of the first sequence:\n");
    scanf("%d", &size1);
    printf("Size of the second sequence:\n");
    scanf("%d", &size2);

    if (size1 > 50 || size2 > 50) {
        printf("Too many values (max=50)");
        return 1;
    }

    printf("Values of the first sequence:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Values of the second sequence:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compare values:
    for (i = 0; i < size1; i++){
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                result[k] = arr1[i];
                k++;
                j = size2;
            }
        }
    }

    // Output data:
    printf("\nFirst array: [%d", arr1[0]);
    for (i = 1; i < size1; i++) {
        printf(", %d", arr1[i]);
    }
    printf("]\nSecond array: [%d", arr2[0]);
    for (i = 1; i < size2; i++) {
        printf(", %d", arr2[i]);
    }
    printf("]\nResult: [%d", result[0]);
    for (i = 1; i < k; i++) {
        printf(", %d", result[i]);
    }
    printf("]\n");

    return 0;
}