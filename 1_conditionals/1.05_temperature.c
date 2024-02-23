/*
Exercise 5:
Create a program that reads a character 'F' or 'C', indicating whether
the next number to be entered corresponds to temperature in Fahrenheit
or Celsius. Then, the program should read the temperature value and print
the corresponding temperature value in the other unit of measure.
Note: (C = 5/9*(F - 32)) 


(PT-BR)
Exercício 5:
Faça um programa que lê um caracter 'F' ou 'C', que indica se o próximo número a ser
digitado corresponde a temperatura em Fahrenheit ou Celsius. Em seguida o programa
deve ler o valor da temperatura e então imprimir o valor correspondente da temperatura
na outra unidade de medida. Obs.: (C = 5/9 · (F " 32)).
*/

#include <stdio.h>

int main()
{
    char unit;
    float C, F;

    printf("Celsius or Fahrenheit? (C/F) ");
    scanf("%c", &unit);

    printf("What is the temperature? ");
    if (unit == 'C') {
        scanf("%f", &C);
        F = C * (9.0/5.0) + 32;
        printf("Temperature in Fahrenheit: %.1f\n", F);
    }
    else if (unit == 'F') {
        scanf("%f", &F);
        C = (5.0/9.0) * (F - 32);
        printf("Temperature in Celsius: %.1f\n", C);
    }
    else {
        printf("Invalid unit.\n");
    }

    return 0;
}