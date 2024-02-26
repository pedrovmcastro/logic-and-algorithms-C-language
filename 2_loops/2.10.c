/*
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

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("\t");
        }
        printf("%d\n", i);
    }

    return 0;
}
