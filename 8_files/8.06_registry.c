/*
Exercise 5:
Create a program that allows the user to enter various names and phone numbers for
a registry, and create a file with this information, one per line. The user ends the
input by entering '0' for the phone number.


(PT-BR)
Exercício 5:
Faça um programa que permita que o usuario entre com diversos nomes e telefone para
cadastro, e crie um arquivo com essas informações, uma por linha. O usuario finaliza a
entrada com '0' para o telefone.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone[20];
} Person;

int main()
{
    FILE *f;
    Person person = {"1", "1"}; // Initializes a struct of type Person, with values person.name = "1" and person.phone = "1".
    char filename[50]; // File name to be created in the program's directory.
    char option; // Program initializer.
    int i = 0;

    // Program initializer.
    printf("Do you want to create a phonebook? (y/n)\n");
    scanf("%c", &option); getchar();
    if (option != 'y' || option != 'Y')
    {
        printf("Closed at the beginning.\n");
        return 0;
    }

    // Choose the file name:
    printf("File name: ");
    fgets(filename, 50, stdin);
    filename[strlen(filename) - 1] = '\0';

    // Open the file:
    f = fopen(filename, "w"); // In "w" mode, if the file does not exist, the program creates it for you.

    // Test if the file opened correctly:
    if (f == NULL){
        printf("Error opening the file\n"); return 1;
    }

    // Write to the file:
    fprintf(arq, "-=-=-=-=-=-=-=-=-=-=-Phonebook-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    while (strcmp(person.phone, "0") != 0)
    {
        i++;

        printf("Person %d: ", i);
        fgets(person.name, 50, stdin);
        person.name[strlen(person.name) - 1] = '\0';

        printf("Phone: ");
        scanf("%s", person.phone);
        getchar();

        fprintf(f, "Name: ");
        fprintf(f, "%s ", person.name);
        fprintf(f, "Phone: ");
        fprintf(f, "%s\n", person.phone);
    }

    // Close the file:
    fclose(1);
    printf("Closed at the end.\n");

    return 0;
}