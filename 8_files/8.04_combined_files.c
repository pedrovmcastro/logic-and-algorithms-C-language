/*
Exercise 4:
Create a program that receives two files from the user and creates a third file with the
content of the first two files combined (the content of the first followed by the content of the
second). 


(PT-BR)
Exercício 4:
Faça um programa que receba dois arquivos do usuario, e crie um terceiro arquivo com
o conteudo dos dois primeiros juntos (o conteudo do primeiro seguido do conteudo do
segundo).
*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f1 = NULL, *f2 = NULL, *f3 = NULL;
    char ch;
    char filename1[80], filename2[80];

    // User input:
    printf("Name of the first file: ");
    fgets(filename1, 80, stdin);
    filename1[strlen(filename1) - 1] = '\0';
    printf("Name of the second file: ");
    fgets(filename2, 80, stdin);
    filename2[strlen(filename2) - 1] = '\0';

    // File opening:
    f1 = fopen(filename1, "r");
    if (f1 == NULL) {
        printf("Error opening file 1.\n");
        return 1;
    }

    f2 = fopen(filename2, "r");
    if (f2 == NULL) {
        printf("Error opening file 2.\n");
        fclose(f1);
        return 1;
    }

    f3 = fopen("result.txt", "w");
    if (f3 == NULL) {
        printf("Error opening file 3.\n");
        fclose(f1);
        fclose(f2);
        return 1;
    }

    // Copy content from file 1 to 3:
    while (fscanf(f1, "%c", &ch) != EOF)
    {
        fprintf(f3, "%c", ch);
    }

    // Copy content from file 2 to 3:
    while (fscanf(f2, "%c", &ch) != EOF)
    {
        fprintf(f3, "%c", ch);
    }

    // Closing files:
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}