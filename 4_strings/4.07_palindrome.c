/*
Exercise 7:
Write a program that reads a string of up to 50 characters and prints "Palindrome" if the string is a palindrome 
and "Not Palindrome" otherwise. 

NOTE: A palindrome is a word or phrase that is the same when read from left to right or right to left 
(assume only lowercase characters without accents. White spaces should be discarded). 
Example of palindrome: "healthy lifestyle".


(PT-BR)
Exercício 7:
Escreva um programa que lê uma string de até 50 caracteres, e imprime "Palindromo"caso
a string seja um palindromo e "Nao Palindromo" caso contrário. OBS: Um palindromo
é uma palavra ou frase, que é igual quando lida da esquerda para a direita ou da direita
para a esquerda (assuma que só são usados caracteres minúsculos e sem acentos. Espaços
em brancos devem ser descartados). Exemplo de palindromo: saudavel leva duas.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int length, i, j;
    int palindrome = 1;

    // Input data:
    fgets(string, 50, stdin);

    // Length of the string:
    length = strlen(string) - 1;

    // Palindrome check:

    //      Remove white spaces and concatenate the words:
    for (i = 0; i < length; i++) {
        if (string[i] == ' ') {
            for (j = i; j < length; j++) {
                string[j] = string[j + 1];
            }
            length--;
            i--;
        }
    }

    //      Check if the string is equal to its reverse:
    for (i = 0, j = length - 1; i < (length - 1) / 2; i++, j--) {
        if (string[i] != string[j]) {
            palindrome = 0;
            break;
        }
    }

    //      Check the boolean value of palindrome and output:
    if (palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
