/*
Exercise 8:
Write a function that, given a real number passed as a parameter, returns the integer
part and the fractional part of this number. Write a program that calls this function.
Prototype:
void frac(float num, int* inteiro, float* frac);


(PT-BR)
Exercício 8:
Escreva uma função que dado um número real passado como parâmetro, retorne a parte
inteira e a parte fracionaria deste número. Escreva um programa que chama esta função. 
Prototipo:
void frac(float num, int* inteiro, float* frac);
*/

#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *integer, float *frac);

int main()
{
    int inteiro;
    float N, fraction;

    printf("Enter a number: ");
    scanf("%f", &N);
    
    frac(N, &integer, &fraction);
    
    printf("Integer part: %d\n", integer);
    printf("Fractional part: %.4f\n", fraction);

    return 0;
}

void frac(float num, int *integer, float *frac)
{
    *integer = (int)num;
    *frac = num - (int)num;
}