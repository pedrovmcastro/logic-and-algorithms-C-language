/*
Exercise 5:
Implement a program to determine whether a sequence of n numbers entered by user its sorted or not. 
Create the program using a counter variable.

(PT-BR)
Exercício 5:
Faça um programa para determinar se uma sequência de n números digitados pelo
usuário está ordenada ou não. Faça o programa usando uma variável contadora.
*/

#include <stdio.h>

int main()
{
    int n, x, y, count=0;

    printf("Sequence lenght: ");
    scanf("%d", &n);

    printf("Enter a value: ");
    scanf("%d", &x);

    for(int i=0; i<n-1; i++) {
        printf("Enter a value: ");
        scanf("%d", &y);
        if (y < x)
            count++;
        x = y;
    }

    if (!count) 
        printf("Sorted");
    else 
        printf("Not sorted");

    return 0;
}