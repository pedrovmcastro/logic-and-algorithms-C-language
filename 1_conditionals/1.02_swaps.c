/*
Exercise 2:
Create a program that reads two integer values into the variables x and y and swaps the contents of the variables. 
Redo this problem without using any variables other than x and y.

(PT-BR)
Exercicio 2: 
Faça um programa que leia dois valores inteiros nas variáveis x e y e troque o conteúdo
das variáveis. Refaça este problema sem o uso de outras variáveis que não x e y.
*/

#include <stdio.h>


int main()
{
    //First swap:
    int x, y, tmp;

    x = 5;
    y = 10;

    tmp = x;
    x = y;
    y = tmp;

    printf("Value of x: %d\nValue of y: %d\n", x, y);

    //Second swap:
    x = 5;
    y = 10;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Value of x: %d\nValue of y: %d\n", x, y);

    return 0;
}
