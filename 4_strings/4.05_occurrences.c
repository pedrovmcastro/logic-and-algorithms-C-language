/*
Exercise 5:
Create a program that reads two strings and eliminates, from the second string, all occurrences of the characters in the first string.


(PT-BR)
Exercício 5:
Faça um programa que leia duas strings e elimine, da segunda string, todas as ocorrências
dos caracteres da primeira string
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[80], string2[80];
    int length1, length2, i, j, k;

    // Input data:
    printf("First string: ");
    fgets(string1, 80, stdin);
    printf("Second string: ");
    fgets(string2, 80, stdin);

    // Length of strings:
    length1 = strlen(string1) - 1;
    length2 = strlen(string2) - 1;

    // Checking the letters of string 1 (outer loop):
    for (i = 0; i < length1; i++) {
        for (j = 0; j < length2; j++) {
            if (string1[i] == string2[j]) {
                // Check all letters of word 2
                // and compare them with only one letter of word 1 (inner loop)
                for (k = j; k < length2; k++) {
                    string2[k] = string2[k + 1];
                    // Swap positions in string 2, replacing each letter with the following one (replacement loop)
                }
            }
        }
    }

    // Output:
    printf("String 2 = %s\n", string2);

    return 0;
}