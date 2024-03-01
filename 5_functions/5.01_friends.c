/*
Exercise 1:
Write a function that takes two positive integers, a and b, as parameters and determines whether they are friends or not. 
The function should return 1 if they are friends and 0 otherwise. Two numbers are considered friends if each number is equal 
to the sum of its proper divisors (the proper divisors of a number m are the divisors strictly less than m). 
For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, and 110, whose sum is 284; 
and the proper divisors of 284 are 1, 2, 4, 71, and 142, whose sum is 220. Therefore, 220 and 284 are friend numbers.

The function prototype should be:
int amigos(int a, int b);

(PT-BR)
Exercício 1:
Escreva uma função que recebe dois números inteiros positivos a e b por parâmetro e
determina se eles são amigos ou não, devolvendo 1 caso sejam amigos, e 0 caso contrário.
Dois números são amigos se cada número é igual à soma dos divisores próprios do outro
(os divisores próprios de um número m são os divisores estritamente menores que m). Por
exemplo, os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110, cuja soma
é 284; e os divisores próprios de 284 são 1, 2, 4, 71 e 142, cuja soma é 220. Logo, 220 e
284 são números amigos. 

O protótipo da função deve ser:
int amigos(int a, int b);
*/

#include <stdio.h>

int friends(int a, int b);

int main()
{
    int a, b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if (friends(a, b)) {
        printf("The numbers are friends");
    }
    else {
        printf("The numbers are not friends");
    }

    return 0;
}

int friends(int a, int b)
{
    int sumA=0, sumB=0;

    for(int i=1; i<=a/2; i++){
        if (a % i == 0) {
            sumA += i;
        }
    }
    
    for(int i=1; i<=b/2; i++){
        if (b % i == 0) {
            sumB += i;
        }
    }

    if (sumA == b && sumB == a) {
        return 1;
    }
    else {
        return 0;
    }
}