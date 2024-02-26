/*
Exercise 10:
Create a program that reads an integer n (at most 50) and prints an output in the following format:

    1
        2
            3
                .
                    .
                        .
                            n 



(PT-BR)
Exercício 10:
Faça um programa que leia um inteiro n (no máximo 50) e imprima uma saída da forma:

    1
        2
            3
                .
                    .
                        .
                            n 
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Invalid input (max=50)."); return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("\t");
        }
        printf("%d\n", i);
    }

    return 0;
}
