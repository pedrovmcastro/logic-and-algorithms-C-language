/* 
Exercise 11:
Implement a program that reads a number n and display n lines on the screen with the following format:
(for instance, if n = 6):

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6 


(PT-BR)
Exercício 11:
Faça um programa que leia um número n e imprima n linhas na tela com o seguinte
formato (exemplo se n = 6):

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6 
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d  ", j);
        }
        printf("\n");
    }
    return 0;
}