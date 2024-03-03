/*
Exercício 5:
Create a program in which the user provides the filename and a word, and return the
number of times that word appears in the file. 


(PT-BR)
Exercício 5:
Faça um programa no qual o usuario informa o nome do arquivo e uma palavra, e retorne
o numero de vezes que aquela palavra aparece no arquivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;
    char filename[50], word[50], *pword = word;
    char ch;
    int count = 0;

    // User input:
    printf("File name: ");
    fgets(filename, 50, stdin);
    filename[strlen(filename) - 1] = '\0';
    printf("Word: ");
    fgets(word, 50, stdin);
    word[strlen(word) - 1] = '\0';

    // File opening:
    f = fopen(filename, "r");
    if (f == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    // Searching for the word in the file:
    while (fscanf(f, "%c", &ch) != EOF)
    {
        if (*pword == ch)
        {
            pword++;
        }
        else
        {
            pword = word;
        }
        if (pword - word == strlen(word))
        {
            count++;
        }
    }

    fclose(f);

    printf("%d\n", count);

    return 0;
}