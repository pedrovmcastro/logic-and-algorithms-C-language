/*
Exercise 9:
Create a program that converts a number in decimal form to its binary representation. 

Tip: Suppose n = 7 (111 in binary), 
and you have already computed x = 11, to "insert" the last digit 1 into x, you should do x = x + 100. 
That is, you need an accumulator variable that stores powers of 10: 1, 10, 100, 1000, etc.


(PT-BR)
Exercício 9:
Faça um programa que converta um número na forma decimal para sua forma em binário.

Dica: Suponha n = 7 (111 em binário), e você já computou x = 11, para "inserir"o
último dígito 1 em x você deve fazer x = x + 100. Ou seja, você precisa de uma variável
acumuladora que armazena as potências de 10: 1, 10, 100, 1000 etc.
*/

#include <stdio.h>

int main()
{
    int decimal, sum = 0, pow10 = 1;

    printf("Enter a number in decimal form: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        if (decimal % 2 == 1) {
            sum += pow10;
        }
        decimal = decimal / 2;
        pow10 *= 10;
    }

    printf("%d", sum);

    return 0;
}