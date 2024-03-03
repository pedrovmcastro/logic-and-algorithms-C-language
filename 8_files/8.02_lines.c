/*
Exercise 2:
Create a program that receives a text file from the user and displays on the screen how many
lines this file has.


(PT-BR)
Exercício 2:
Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas
linhas esse arquivo possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("test.txt", "r");
    char c;
    int count = 0;

    if (f == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    while (fscanf(f, "%c", &c) != EOF)
        count++;

    rewind(f); // Repositions the file pointer to the beginning

    if (count) {
        count = 1;
        while (fscanf(f, "%c", &c) != EOF){
            if (c == '\n' || c == '\r'){
                count++;
            }
        }
        fclose(f);
        printf("%d\n", count);
    }
    else {
        fclose(f);
        printf("The file is empty\n");
    }

    return 0;
}