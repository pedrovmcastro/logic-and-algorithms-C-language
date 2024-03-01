/*
Exercise 8:
Write a function that takes as parameters three square matrices of size at most 30×30, where the first and the second matrices
correspond to input, and the third corresponds to a response matrix. The function should calculate the multiplication
of the first matrix by the second matrix and store the result in the response matrix. The function also takes an integer
n as a parameter, indicating the dimensions of the matrices. The function prototype should be:
void multiply(double mat1[30][30], double mat2[30][30], double matRes[30][30], int n);


Exercício 8:
Escreva uma função que recebe como parâmetro três matrizes quadradas de tamanho no
máximo 30 × 30, onde a primeira e a segunda matriz correspondem a entrada e a terceira
corresponde a uma matriz resposta. A função deve calcular a multiplicação da primeira
pela segunda matriz e guardar o resultado na matriz resposta. A função também recebe
como parâmetro um inteiro n que indica as dimensões das matrizes. O protótipo da função
deve ser:
void multiplica(double mat1[30][30], double mat2[30][30], double matRes[30][30], int n);
*/

#include <stdio.h>

void multiply(double mat1[30][30], double mat2[30][30], double matRes[30][30], int n);

int main() 
{
    double mat1[30][30], mat2[30][30], matRes[30][30];
    int n;

    printf("Enter the dimension of the matrices (up to 30x30): ");
    scanf("%d", &n);

    if (n > 30) {
        printf("Invalid dimension. Maximum allowed dimension is 30x30.\n");
        return 1;
    }

    printf("Enter the values for the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d,%d]: ", i, j);
            scanf("%lf", &mat1[i][j]);
        }
    }

    printf("Enter the values for the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d,%d]: ", i, j);
            scanf("%lf", &mat2[i][j]);
        }
    }

    multiplica(mat1, mat2, matRes, n);

    printf("Result matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%lf ", matRes[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiply(double mat1[30][30], double mat2[30][30], double matRes[30][30], int n); {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matRes[i][j] = 0; 
            for (int k = 0; k < n; k++) {
                matRes[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}