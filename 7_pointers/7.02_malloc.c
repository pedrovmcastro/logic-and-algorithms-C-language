/*
Exercise 2:
Create a program that reads the dimension 'n' of a vector, then dynamically allocates two double-type vectors of dimension 'n', 
reads each vector, and finally prints the result of the sum of the two vectors.


(PT-BR)
Exercício 2:
Faca um programa que leia a dimensao n de um vetor, em seguida
aloca dinamicamente dois vetores do tipo double de dimensao n, faz a
leitura de cada vetor e finalmente e imprime o resultado da soma dos
dois vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    double *v1, *v2, sum = 0;

    printf("Vector dimension: ");
    scanf("%d", &n);

    v1 = malloc(n * sizeof(double));
    v2 = malloc(n * sizeof(double));

    printf("Vector 1:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &v1[i]);
    }

    printf("Vector 2:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &v2[i]);
    }

    for (i = 0; i < n; i++) {
        sum += v1[i] + v2[i];
    }

    free(v1);
    free(v2);

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("SUM = %.2lf", sum);

    return 0;
}