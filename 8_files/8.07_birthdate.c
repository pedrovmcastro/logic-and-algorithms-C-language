/*
Exercise 7:
Given a file containing a set of names and birthdates (DD MM YYYY, that is, 3 integers in sequence),
create a program that reads the name of the file and today's date, and constructs another file containing
the name and age of each person from the first file. 


(PT-BR)
Exercício 7:
Dado um arquivo contendo um conjunto de nome e data de nascimento (DD MM AAAA,
isto e, 3 inteiros em sequência), faça um programa que leia o nome do arquivo e a data
de hoje e construa outro arquivo contendo o nome e a idade de cada pessoa do primeiro
arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    FILE *f = NULL, *fAges = NULL;
    char filename[50];
    char name[50];
    int dayToday, monthToday, yearToday;
    int day, month, year, age = 1;

    printf("File name: ");
    fgets(filename, 50, stdin);
    filename[strlen(filename) - 1] = '\0';
    printf("Enter today's date (DD MM YYYY): ");
    scanf("%d %d %d", &dayToday, &monthToday, &yearToday);

    f = fopen(filename, "r");
    if (f == NULL) {
        printf("Error opening file 1."); 
        return 1;
    }

    fAges = fopen("Ages.txt", "w");
    if (fAges == NULL) {
        printf("Error opening file 2."); 
        fclose(f);
        return 1;
    }

    while (fscanf(f, "%s %d %d %d", name, &day, &month, &year) != EOF)
    {
        if ((month < monthToday) || (month == monthToday && day <= dayToday))
        {
            age = yearToday - year;
        }
        else
        {
            age = yearToday - year - 1;
        }
        fprintf(fAges, "%s: %d years\n", name, age);
    }

    fclose(f);
    fclose(fAges);

    return 0;
}