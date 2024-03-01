/*
Exercise 6:
Write a function that takes as parameters two square matrices of size at most 30 × 30, where the first matrix corresponds 
to an input matrix and the second corresponds to a response matrix. The function should calculate the transpose
of the input matrix and store the result in the response matrix. The function also takes an integer n as a parameter,
indicating the dimensions of the matrices. The function prototype should be:
void transpose(double mat1[30][30], double matRes[30][30], int n);


(PT-BR)
Exercício 6:
Escreva uma função que recebe como parâmetro duas matrizes quadradas de tamanho
no máximo 30 × 30, onde a primeira matriz corresponde a uma matriz de entrada e a
segunda corresponde a uma matriz resposta. A função deve calcular a transposta da
matriz de entrada e guardar o resultado na matriz resposta. A função também recebe
como parâmetro um inteiro n que indica as dimensões das matrizes. O protótipo da
função deve ser:
void transposta(double mat1[30][30], double matRes[30][30], int n);
*/

#include <stdio.h>

void transpose(double mat1[30][30], double matRes[30][30], int n);

int main()
{
    double mat1[30][30], matRes[30][30];
    int size;

    printf("Enter the dimension of the matrix (up to 30x30): ");
    scanf("%d", &size);

    if (size > 30) {
        printf("Invalid dimension. Maximum allowed dimension is 30x30.\n");
        return 1;
    }

    printf("Enter the values:\n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("[%d,%d]: ", i, j);
            scanf("%lf", &mat1[i][j]);
        }
    }

    transpose(mat1, matRes, size);

    printf("\nTransposed Matrix:\n");
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%.1lf ", matRes[i][j]);
        }
        printf("\n");
    }
}

void transpose(double mat1[30][30], double matRes[30][30], int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matRes[i][j] = mat1[j][i];
        }
    }
}
