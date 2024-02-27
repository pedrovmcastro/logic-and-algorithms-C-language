/*
Exercise 7:
Create a program that reads two sequences of ordered integers and saves each sequence in an array.
Assume that the maximum number of elements in a sequence is 50. Write a program to interleave the values of the two arrays into a third array,
in ascending order.
Example:
v1 = [1, 3, 5, 5, 7, 9, 10]
v2 = [2, 2, 4, 6, 8, 8, 10]
v3 = [1, 2, 2, 3, 4, 5, 5, 6, 7, 8, 8, 9, 10, 10]


(PT-BR)
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
    int arr1[50], arr2[50], arr3[100];
    int size1, size2, i = 0, j = 0, k = 0;

    printf("How many values in the first array? ");
    scanf("%d", &size1);

    printf("How many values in the second array? ");
    scanf("%d", &size2);

    if (size1 > 50 || size2 > 50) {
        printf("Too many values (max=50).");
        return 1;
    }

    // Input values in the first array:
    printf("Enter the values for the first array:\n");
    scanf("%d", &arr1[0]);
    for (i = 1; i < size1; i++) {
        scanf("%d", &arr1[i]);
        if (arr1[i] < arr1[i - 1]) {
            printf("The values need to be sorted");
            return 1;
        }
    }

    // Input values in the second array:
    printf("Enter the values for the second array:\n");
    scanf("%d", &arr2[0]);
    for (i = 1; i < size2; i++) {
        scanf("%d", &arr2[i]);
        if (arr2[i] < arr2[i - 1]) {
            printf("The values need to be sorted");
            return 1;
        }
    }

    // Merge the two arrays in ascending order into the third array:
    i = 0;
    j = 0;
    k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        } else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If there are remaining elements in the first array, add them to the third array:
    while (i < size1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // If there are remaining elements in the second array, add them to the third array:
    while (j < size2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    // Print the merged array:
    printf("Merged Array: [");
    for (i = 0; i < k; i++) {
        printf("%d", arr3[i]);
        if (i < k - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}