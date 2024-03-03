/*
Exercise 9:
Develop a C program for handling student records in a binary file named "student.bin."
The program uses a structure, Student, that stores the name and Academic Registry (RA) of a student.
The code starts by creating the binary file and writing four student records with their respective names and RAs.
The program features two main functions: imprimeArquivo (printFile) and alteraNome (changeName).
The first function prints the data contained in the file to the screen, while the second allows changing a student's name based on the provided RA.
The code illustrates the use of basic operations for reading, writing, and manipulating binary files in C, using structures to represent data records.


(PT-BR)
Exercício 9:
Desenvolva um programa em C para manipulação de registros de alunos em um arquivo binário chamado "aluno.bin".
O programa utiliza uma estrutura Aluno que armazena o nome e o Registro Acadêmico (RA) de um estudante. 
O código inicia criando o arquivo binário e escrevendo quatro registros de alunos com seus respectivos nomes e RAs.
O programa apresenta duas funções principais: imprimeArquivo e alteraNome. A primeira função imprime na tela
os dados contidos no arquivo, enquanto a segunda permite a alteração do nome de um aluno com base no RA fornecido.
O código exemplifica o uso de operações básicas de leitura, escrita e manipulação de arquivos binários em C,
utilizando estruturas para representar registros de dados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char name[100];
    int RA;
} Student;

void printFile(char fileName[]);
void changeName(char fileName[], int ra, char name[]);

int main() {
    char fileName[] = "student.bin";
    Student students[] = {{"Potato", 1}, {"Isa", 2}, {"Malu", 3}, {"Beto", 4}};

    FILE *file = fopen(fileName, "w+b");
    if (file == NULL) {
        printf("Error creating the file\n");
        return 1;
    }
    fwrite(students, sizeof(Student), 4, file);
    fclose(file);

    printFile(fileName);
    changeName(fileName, 2, "Isabela");
    printFile(fileName);

    return 0;
}

void printFile(char fileName[]) {
    FILE *file = fopen(fileName, "r+b");

    if (file == NULL) {
        printf("File does not exist!\n");
        return;
    }

    printf("\n-------------File Data-------------\n");
    Student aux;
    while (fread(&aux, sizeof(Student), 1, file) != 0) {
        printf("Name: %s, RA: %d\n", aux.name, aux.RA);
    }

    fclose(file);
}

void changeName(char fileName[], int ra, char name[]) {
    FILE *file = fopen(fileName, "r+b");

    if (file == NULL) {
        printf("File does not exist!\n");
        return;
    }

    Student aux;
    int found = 0;
    while (fread(&aux, sizeof(Student), 1, file) != 0) {
        if (aux.RA == ra) {
            found = 1;
            break;
        }
    }

    // Move back one position to overwrite the record
    if (found) {
        fseek(file, -1 * sizeof(Student), SEEK_CUR);
        strcpy(aux.name, name); // Update the name
        fwrite(&aux, sizeof(Student), 1, file);
    }
    fclose(file);
}