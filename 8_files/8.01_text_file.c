/*
Exercise 1:
Write a program that:
(a) Creates/opens a text file named "f.txt".
(b) Allows the user to input various characters into this file until the user
enters the character '0'.
(c) Closes the file.
Now, open and read the file, character by character, and display all the stored characters on the screen.


(PT-BR)
Exercício 1:
Escreva um programa que:
(a) Crie/abra um arquivo texto de nome arq.txt.
(b) Permita que o usuario grave diversos caracteres nesse arquivo, até que o usuário
entre com o caractere '0'.
(c) Feche o arquivo.
Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char c;

    f = fopen("f.txt", "w");

    if (f == NULL)
    {
        printf("1 Error opening the file.\n");
        return 1;
    }

    do {
        scanf("%c", &c);
        fprintf(f, "%c", c);
    } while (c != '0');

    fclose(f);

    f = fopen("f.txt", "r");

    if (f == NULL)
    {
        printf("2 Error opening the file.\n");
        return 1;
    }

    while (fscanf(f, "%c", &c) != EOF)
        printf("%c", c);

    fclose(f);

    return 0;
}