/*
Exercise 4:
Given two sequences of n and m integer values, where n <= m, write a program that
checks how many times the first sequence occurs in the second.
Example:
first sequence: 1 0 1
second sequence: 1 1 0 1 0 1 0 0 1 1 0 1 0
Result: 3 


(PT-BR)
Exercício 4:
Dadas duas sequências de n e m valores inteiros, onde n <= m, escreva um programa que
verifica quantas vezes a primeira sequência ocorre na segunda.
Exemplo:
primeira sequência: 1 0 1
segunda sequência: 1 1 0 1 0 1 0 0 1 1 0 1 0
Resultado: 3 
*/

#include <stdio.h>

int main()
{
    int n, m, i, j, k, count = 0;

    printf("Enter the sizes of the sequences n and m, respectively:\n");
    scanf("%d %d", &n, &m);

    int sequence1[n], sequence2[m];

    if (n <= m) {
        // Input data:
        printf("Values of sequence n:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &sequence1[i]);
        printf("Values of sequence m:\n");
        for (i = 0; i < m; i++)
            scanf("%d", &sequence2[i]);

        // Check the sequences:
        for (i = 0; i < m; i++) {
            k = i;
            for (j = 0; j < n; j++) {
                if (sequence1[j] == sequence2[k]) {
                    if (j == n - 1) {
                        count++;
                    }
                }
                else {
                    j = n;
                }
            }
        }

        // Print the results:
        printf("First sequence:");
        for (i = 0; i < n; i++) {
            printf(" %d", sequence1[i]);
        }

        printf("\nSecond sequence:");
        for (i = 0; i < m; i++) {
            printf(" %d", sequence2[i]);
        }

        printf("\nResult = %d\n", count);
    }
    else
        printf("Invalid values. (n <= m)\n");

    return 0;
}