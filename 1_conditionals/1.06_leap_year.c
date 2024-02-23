/*
Exercise 6:
Create a program that reads a year (integer value) and prints whether it is a leap year or not.
Note: All years divisible by 400 are leap years. If not divisible by 400, leap years are 
those divisible by 4 but not divisible by 100.


(PT-BR)
Exercício 6:
Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou não. OBS:
São bissexto todos os anos múltiplos de 400. Não sendo múltiplo de 400, são bissextos todos
os anos múltiplos de 4 mas que não são múltiplos de 100.
*/

#include <stdio.h>

int main()
{
    int year;
    
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}