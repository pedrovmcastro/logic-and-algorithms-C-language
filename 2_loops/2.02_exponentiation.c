/*
Exercício 2:
Create a program that reads two positive integers, 'a' and 'b'. 
Using loops, your program should calculate and print the value of a^b.


(PT-BR)
Exercício 2:
Faça um programa que lê dois números inteiros positivos a e b. Utilizando laços, o seu
programa deve calcular e imprimir o valor a^b.
*/

#include <stdio.h>

int main()
{
    int a, b, product;

    printf("Enter a positive number: ");
    scanf("%d", &a);
    printf("Enter another positive number: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Invalid numbers");
        return 1;
    }

    product = 1;
    for(int i=0; i<b; i++){
        product *= a;
    }

    printf("Result: %d", product);

    return 0;
}