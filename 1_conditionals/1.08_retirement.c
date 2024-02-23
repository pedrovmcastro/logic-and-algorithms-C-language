/*
Exercise 8:
A person can retire if they meet one of the following conditions:
• Is male, at least 65 years old, and has at least 10 years of contribution.
• Is male, at least 63 years old, and has at least 15 years of contribution.
• Is female, at least 63 years old, and has at least 10 years of contribution.
• Is female, at least 61 years old, and has at least 15 years of contribution.

Create a program to read a character 'M' or 'F' representing an individual's gender,
read their age, and their contribution time. The program should then print "Retirable"
if the individual fits into one of the above conditions. Otherwise, the program
should print "Not Retirable".


(PT-BR)
Exercício 8:
Uma pessoa pode se aposentar caso esteja em alguma das situações abaixo:
    • É do sexo masculino, possui pelo menos 65 anos, e pelo menos 10 anos de contribuição.
    • É do sexo masculino, possui pelo menos 63 anos, e pelo menos 15 anos de contribuição.
    • É do sexo feminino, possui pelo menos 63 anos, e pelo menos 10 anos de contribuição.
    • É do sexo feminino, possui pelo menos 61 anos, e pelo menos 15 anos de contribuição.

Crie um programa para ler um caracter ’M’ ou ’F’ que representa o sexo de um indivíduo,
ler a sua idade, e seu tempo de contribuição. O programa deverá então imprimir “Aposentável” 
caso o indivíduo se enquadrar em uma das situações acima. Caso contrário o programa 
deverá imprimir “Não Aposentável”.
*/

#include <stdio.h>

int main()
{
    int age, contribution;
    char gender;

    printf("Gender: "); 
    scanf("%c", &gender);
    printf("Age: "); 
    scanf("%d", &age);
    printf("Contribution: "); 
    scanf("%d", &contribution);

    if (gender == 'M') {
        if ((age >= 65 && contribution >= 10) || (age >= 63 && contribution >= 15)) {
            printf("Retirable");
        }
        else {
            printf("Not Retirable");
        }
    }
    else if (gender == 'F') {
        if ((age >= 63 && contribution >= 10) || (age >= 61 && contribution >= 15)) {
            printf("Retirable");
        }
        else {
            printf("Not Retirable");
        }
    }

    return 0;
}