/*
Exercise 6:
Create a structure representing students in a specific course. The structure should include the student's enrollment number, name,
grade on the first test, grade on the second test, and grade on the third test.
(a) Allow the user to enter data for 5 students.
(b) Find the student with the highest grade on the first test.
(c) Find the student with the highest overall average.
(d) For each student, indicate whether they passed or failed, considering the passing grade as 6.


(PT-BR)
Exercício 6:
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.
(d) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char name[80];
    float grade1;
    float grade2;
    float grade3;
}Student;

Student registerStudent();
int highestGradeFirstTest(Student students[], int size);
int highestMean(Student students[], int size);

int main()
{
    Student students[3];
    int index;

    // Register students:
    for(int i=0; i<3; i++){
        students[i] = registerStudent();
    }

    // Highest grade on the first test:
    index = highestGradeFirstTest(students, 3);
    printf("%s got the highest grade on the first test\n", students[index].name);

    // Highest overall mean:
    index = highestMean(students, 3);
    printf("%s got the highest mean\n", students[index].name);


    // Passed or Failed:
    for(int i=0; i<3; i++){
        if ((students[i].grade1 + students[i].grade2 + students[i].grade3)/3 >= 6){
            printf("%s: PASSED\n", students[i].name);
        }
        else{
            printf("%s: FAILED\n", students[i].name);
        }
    }

    return 0;
}

Student registerStudent()
{
    Student student;

    printf("ID: ");
    scanf("%d", &student.id); getchar();
    printf("Name: ");
    fgets(student.name, 80, stdin);
    student.name[strlen(student.name)-1] = '\0';
    printf("First Grade: ");
    scanf("%f", &student.grade1);
    printf("Second Grade: ");
    scanf("%f", &student.grade2);
    printf("Third Grade: ");
    scanf("%f", &student.grade3);
    printf("\n");

    return student;
}

int highestGradeFirstTest(Student students[], int size)
{
    float highestGrade = 0;
    int indexHighestGrade;
    for(int i=0; i<size; i++){
        if (students[i].grade1 > highestGrade){
            highestGrade = students[i].grade1;
            indexHighestGrade = i;
        }
    }
    return indexHighestGrade;
}

int highestMean(Student students[], int size)
{
    float highestMean=0;
    int indexHighestMean;
    for(int i=0; i<size; i++){
        if((students[i].grade1 + students[i].grade2 + students[i].grade3)/3 > highestMean){
            highestMean = (students[i].grade1 + students[i].grade2 + students[i].grade3)/3;
            indexHighestMean = i;
        }
    }
    return indexHighestMean;
}