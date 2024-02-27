/*
Exercise 8:
Create a program that calculates the dot product of two arrays, u and v, of the same size'n' read from the keyboard. 
The program should first read the value of n 
and then read two sequences of the same size of real numbers and save each sequence in an array. 
Assume that the maximum number of elements in a sequence is 50. 
The program should then calculate the dot product of the read vectors.


(PT-BR)
Exercício 8:
Faça um programa que calcule o produto interno de dois vetores u e v de mesmo tamanho
n lidos do teclado. O programa deve ler primeiramente o valor de n e em seguida deve
ler duas sequências de mesmo tamanho de números reais e salvar cada sequência em um
vetor. Suponha que o número máximo de elementos de uma sequência é 50. O programa
deve então calcular o produto interno dos vetores lidos.
*/

#include <stdio.h>

int main() 
{
    float u[50], v[50];
    float dot=0;
    int n;

    printf("Lenght: ");
    scanf("%d", &n);

    if (n > 50){
        printf("Invalid lenght (max=50)"); return 1;
    }

    printf("Enter the values for the first array:\n");
    for(int i=0; i<n; i++) {
        printf("[%d]: ", i);
        scanf("%f", &u[i]);
    }

    printf("Enter the values for the second array:\n");
    for(int i=0; i<n; i++) {
        printf("[%d]: ", i);
        scanf("%f", &v[i]);
    }

    for(int i=0; i<n; i++) {
        dot += u[i]*v[i];
    }

    printf("Dot Product: %.2f\n", dot);

    return 0;
}