/*
Exercise 3:
Create a program that reads a string from the user. A function receives this string as a parameter
and returns the number of characters in the string, excluding spaces. Print the returned value on the screen.


(PT-BR)
Exercício 3:
Faça um programa que leia uma string do usuario. Uma função recebe essa string como parâmetro
e retorna o numero de caracteres da string, com excecao do " " (espaco em branco).
Imprima na tela o valor retornado. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int letterCounter(char *str);

int main()
{
    char string[80];
    int ret;

    fgets(string, 80, stdin);
    string[strlen(string) - 1] = '\0';
    ret = letterCounter(string);
    printf("%d\n", ret);

    return 0;
}

int letterCounter(char *str)
{
    char *pStr = str; // saves the initial address in a variable;
    int count = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            count++; // count of spaces;
        }
        str++; // update the address of str;
    }
    return str - count - pStr;
}
