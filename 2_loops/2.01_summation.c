/*
Exercise 1:
Create a program that reads a number 'n' and calculates and prints the value of a summation of 'n' terms,
with values ranging from 1 to 'n'.

(PT=BR)
Exercício 1:
Faça um programa que leia um número n e que compute e imprima o valor
de uma somatória de n termos, com valores indo de 1 até n.
*/

#include <stdio.h>

int main()
{
    int n, i, sum;

    printf("Number: ");
    scanf("%f", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum: %d", sum);

    return 0;
}