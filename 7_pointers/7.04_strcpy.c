/*
Exercise 4:
Create a program that reads a string from the user.
Create a function that copies this string to a variable called 'dest'. Print this variable.


(PT-BR)
Exercício 4:
Faça um programa que leia uma string do usuário.
Faça uma função que copie essa string para uma variavel chamada dest. Imprima essa variável.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copyString(char *orig, char *dest);

int main()
{
    char orig[80], dest[80];

    printf("Enter the string: ");
    fgets(orig, 80, stdin);
    orig[strlen(orig) - 1] = '\0';
    copyString(orig, dest);
    printf("%s\n", dest);

    return 0;
}

void copyString(char *orig, char *dest)
{
    while (*dest = *orig)
    {
        orig++; // increments the addresses of the arrays to access their values in the next assignment.
        dest++;
    }
}