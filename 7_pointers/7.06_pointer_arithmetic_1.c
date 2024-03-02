/*
Exercise 6:
Create a program that contains an array of integers with 5 elements. Using
only pointer arithmetic, read this array from the keyboard and print twice the value of each
read value.


(PT-BR)
Exercício 6:
Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada 
valor lido.
*/

#include <stdio.h>
#include <stdlib.h>

void doubleValues(int *array);

int main()
{
    int *vet = malloc(5 * sizeof(int));
    int c = 0;

    while (c != 5)
    {
        scanf("%d", vet);
        vet++;
        c++;
    }

    c = 0;
    vet -= 5;
    while (c != 5)
    {
        printf("%d ", 2 * (*vet));
        vet++;
        c++;
    }

    free(vet);

    return 0;
}
