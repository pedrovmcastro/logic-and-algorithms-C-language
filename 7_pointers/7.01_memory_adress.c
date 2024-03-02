/*
Exercise 1:
Write a program that contains two integer variables. Read these variables from the keyboard. 
Next, compare their addresses and display the content of the larger address.


(PT-BR)
Exercício 1:
Escreva um programa que contenha duas variaveis inteiras. Leia essas variáveis do teclado.
Em seguida, compare seus endereços e exiba o conteudo do maior endereço.
*/

#include <stdio.h>

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", pa, pb);

    if (pa > pb) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }

    return 0;
}
