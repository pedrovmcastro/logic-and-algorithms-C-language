/*
Exercise 1:
Implement a program that reads an array at most 50 float numbers and calculates the arithmetic mean of these values.


(PT-BR)
Exercício 1:
Escreva um programa que leia um vetor de até 50 números reais e calcule a média destes valores.
*/

#include <stdio.h>

int main()
{
    float array[50], n, sum=0;

    printf("How many values? ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Too many values (max = 50).");
        return 1;
    }

    for(int i=0; i<n; i++) {
        printf("Enter a value: ");
        scanf("%f", &array[i]);
    }

    for(int i=0; i<n; i++) {
        sum += array[i];
    }

    printf("Mean: %.2f", sum/n);

    return 0;
}