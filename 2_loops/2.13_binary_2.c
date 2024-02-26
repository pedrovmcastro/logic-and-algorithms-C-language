/* 
Exercise 13:
Create a program that reads a binary number and prints its decimal conversion.

(PT-BR)
Exercício 13:
Faca um programa que leia um numero em binário, e que imprima a conversao dele para decimal.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int bin, acc = 0;

    printf("Enter a binary: ");
    scanf("%d", &bin);

    for (int i=0; bin >= 1; i++) {
        if (bin%2 != 0) {
            acc += (int)pow(2,i);
        }
        bin = bin/10;
    }

    printf("Decimal form: %d", acc);

    return 0;
}