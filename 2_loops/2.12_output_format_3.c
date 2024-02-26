/* 
Exercise 12:
Create a program that reads a number n and prints n lines on the screen with the following
format (example if n = 6):

+ * * * * *
* + * * * *
* * + * * *
* * * + * *
* * * * + *
* * * * * +


(PT-BR)
Exercício 12:
Faça um programa que leia um número n e imprima n linhas na tela com o seguinte
formato (exemplo se n = 6):

+ * * * * *
* + * * * *
* * + * * *
* * * + * *
* * * * + *
* * * * * + 

*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (j == i) {
                printf("+ ");
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}