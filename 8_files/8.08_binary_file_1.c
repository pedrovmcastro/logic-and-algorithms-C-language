/*
Exercise 8:
Create a program that receives as input the number of students in a discipline. 
Dynamically allocate a structure to store information about these students: the student's name and their final grade.
Use names with a maximum of 40 characters. Then, save the students' data in a binary file. Finally, read the file
and show the name of the student with the highest grade. 


(PT-BR)
Exercício 8:
Crie um programa que receba como entrada o numero de alunos de uma disciplina. Alo- �
que dinamicamente em uma estrutura para armazenar as informac�oes a respeito desses �
alunos: nome do aluno e sua nota final. Use nomes com no maximo 40 caracteres. Em �
seguida, salve os dados dos alunos em um arquivo binario. Por fim, leia o arquivo e �
mostre o nome do aluno com a maior nota
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[40];
    float grade;
} Student;

int main()
{
    FILE *outputFile = fopen("output.bin", "wb");
    int N;
    Student *students;
    char *name, *nameHighest;
    float grade, highest;

    if (outputFile == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Number of students: ");
    scanf("%d", &N);
    getchar();

    students = malloc(N * sizeof(Student));
    if (students == NULL)
    {
        printf("Failed to allocate the 'students' array.\n");
        fclose(outputFile);
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("Name: ");
        fgets(students[i].name, 40, stdin);
        students[i].name[strlen(students[i].name) - 1] = '\0';
        printf("Final grade: ");
        scanf("%f", &students[i].grade);
        getchar();
    }

    for (int i = 0; i < N; i++)
    {
        fwrite(students[i].name, sizeof(char), 40, outputFile); // Write each name
        fwrite(&students[i].grade, sizeof(float), 1, outputFile); // Write each grade
    }

    for (int i = 0; i < N; i++)
    {
        free(students[i].name);
    }
    free(students);

    fclose(outputFile);

    outputFile = fopen("output.bin", "rb");
    if (outputFile == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    name = malloc(40 * sizeof(char));
    if (name == NULL)
    {
        printf("Failed to allocate the 'name' array.\n");
        fclose(outputFile);
        return 1;
    }

    nameHighest = malloc(40 * sizeof(char));
    if (nameHighest == NULL)
    {
        printf("Failed to allocate the 'nameHighest' array.\n");
        fclose(outputFile);
        free(name);
        return 1;
    }

    fread(name, sizeof(char), 40, outputFile);
    fread(&grade, sizeof(float), 1, outputFile);
    highest = grade;
    strcpy(nameHighest, name);

    for (int i = 1; i < N; i++)
    {
        fread(name, sizeof(char), 40, outputFile);
        fread(&grade, sizeof(float), 1, outputFile);
        if (grade > highest)
        {
            highest = grade;
            strcpy(nameHighest, nome);
        }
    }

    printf("Highest grade = %.2f, student: %s\n", highest, nameHighest);
    fclose(outputFile);

    free(name);
    free(nameHighest);

    return 0;
}