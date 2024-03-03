/*
Exercise 3:
Create a program that receives a text file from the user and displays on the screen how many
letters are vowels.


(PT-BR)
Exercício 3:
Faça um programa que receba do usuario um arquivo texto e mostre na tela quantas �
letras sao vogais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("vowels.txt", "r");
    char vowels[10] = "aeiouAEIOU";
    char c;
    int count = 0;

    if (f == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fscanf(f, "%c", &c) != EOF)
    {
        for (int i = 0; i < 10; i++)
        {
            if (vowels[i] == c)
            {
                count++;
                break;
            }
        }
    }

    fclose(f);

    printf("Number of vowels: %d\n", count);

    return 0;
}