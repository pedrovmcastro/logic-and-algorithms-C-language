/*
Exercise 1:
Create a program that reads a real number x and calculates the value of f(x) = sqrt(x) + (x/2) + x^x.
(Research about the functions sqrt and pow).

(PT-BR)
Exercício 1:
Faça um programa que leia um número real x e calcule o valor de f(x) = sqrt(x) + (x/2) + x^x.
(pesquise sobre as funções sqrt e pow).
*/

#include <stdio.h>
#include <math.h>

int main(){

    float x, f;

    printf("Enter a real number: ");
    scanf("%f", &x);

    f = sqrt(x) + x/2 + pow(x,x);

    printf("Result: %.1f\n", f);

    return 0;
}