/*
Exercise 6:
Create a program that reads two sequences of distinct integers and saves each
sequence in an array. Assume that the maximum number of elements in a sequence
is 50. Assume that each of these arrays represents a set containing the elements
stored in it. The program should then save in a third array the result of the
union of the two initial arrays and print the result.

Example:
v1: [1, 2, 3, 4, 5]
v2: [2, 5, 7, 1, -9, 18]
Result: [1, 2, 3, 4, 5, 7, -9, 18]

(PT-BR)
Exercício 6:
Faça um programa que leia duas sequências de números inteiros distintos e salve cada
sequência em um vetor. Suponha que o número máximo de elementos de uma sequência
é 50. Suponha que cada um destes vetores represente um conjunto contendo os elementos
nele armazenados. O programa deve então salvar em um terceiro vetor o resultado da
união dos dois primeiros vetores e imprimir o resultado.

Exemplo:
v1: [1, 2, 3, 4, 5]
v2: [2, 5, 7, 1, -9, 18]
Resultado: [1, 2, 3, 4, 5, 7, -9, 18]
*/

#include <stdio.h>

int main()
{
    int i, j, k;
    int arr1[50], arr2[50], result[50];
    int lenArr1, lenArr2;

    // Input data:
    printf("Size of the first sequence:\n");
    scanf("%d", &lenArr1);
    printf("Size of the second sequence:\n");
    scanf("%d", &lenArr2);

    if (lenArr1 > 50 || lenArr2 > 50) {
        printf("Invalid input (max=50)\n");
        return 1;
    }

    printf("Values of the first sequence:\n");
    for (i = 0; i < lenArr1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Values of the second sequence:\n");
    for (i = 0; i < lenArr2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Inserting all values from arr1 into the result array:
    for (i = 0; i < size_v1; i++) {
        result[i] = v1[i];
    }
    // After checking all, and all are different, add the different values to the result array.
    // Checking which values from arr2 do not exist in arr1:
    k = lenArr1;
    for (j = 0; j < lenArr2; j++) {
        for (i = 0; i < lenArr1; i++) {
            if (arr2[j] != arr1[i]) {
                if (i == lenArr1 - 1) {   // If reached the last index in the first array indicates do not exist in arr1
                    result[k] = arr2[j];
                    k++;
                }
            }
            else {
                break;
            }
        }
    }

    // Output data:
    printf("\nv1: [%d", v1[0]);
    for (i = 1; i < size_v1; i++) {
        printf(", %d", v1[i]);
    }
    printf("]\nv2: [%d", v2[0]);
    for (i = 1; i < size_v2; i++) {
        printf(", %d", v2[i]);
    }
    printf("]\nResult: [%d", result[0]);
    for (i = 1; i < k; i++) {
        printf(", %d", result[i]);
    }
    printf("]\n");

    return 0;
}