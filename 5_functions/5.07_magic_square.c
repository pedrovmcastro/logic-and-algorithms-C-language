/*
Exercise 7:
A square matrix of integers is a magic square if the sum of the elements in each row, the sum of the elements in each column, 
the sum of the elements in the main diagonal, and the sum of the elements in the secondary diagonal are all equal. 
The matrix below is an example of a magic square:
3   4   8
10  5   0
2   6   7
Write a function that takes as parameters a square matrix of size at most 30×30 and its dimensions n, and determines
whether it is a magic square, returning 1 if it is and 0 otherwise. The function prototype should be:
int magic(int mat[30][30], int n);


(PT-BR)
Exercício 7:
Uma matriz quadrada de inteiros é um quadrado mágico se a soma dos elementos de cada
linha, a soma dos elementos de cada coluna, a soma dos elementos da diagonal principal
e da diagonal secundária são todos iguais. A matriz abaixo é um exemplo de quadrado
mágico:
3   4   8
10  5   0
2   6   7
Escreva uma função que recebe como parâmetro uma matriz quadrada de tamanho no
máximo 30×30, e suas dimensões n, e determina se ela é um quadrado mágico devolvendo
1 caso seja e 0 caso contrário. O protótipo da função deve ser:
int magico(int mat[30][30], int n);
*/

#include <stdio.h>

int magic(int mat[30][30], int n);

int main()
{
    int mat[30][30];
    int n;

    printf("Enter the dimension of the matrix (up to 30x30): ");
    scanf("%d", &n);

    if (n > 30) {
        printf("Invalid dimension. Maximum allowed dimension is 30x30.\n");
        return 1;
    }

    printf("Enter the values:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("[%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    if (magic(mat, n)) {
        printf("It is a magic square");
    }
    else {
        printf("It is not a magic square");
    }

    return 0;
}

int magic(int mat[30][30], int n)
{
    int k=0, sum, sums[30];

    // Rows:
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=0; j<n; j++){
            sum += mat[i][j];
        }
        sums[k++] = sum;
    }

    // Columns:
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=0; j<n; j++){
            sum += mat[j][i];
        }
        sums[k++] = sum;
    }

    // Main diagonal:
    sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i];
    }
    sums[k++] = sum;

    // Secondary diagonal:
    sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][n-i-1];
    }
    sums[k] = sum;


    // Check if all sums are equal
    for(int i=1; i<k; i++){
        if (sums[i] != sums[i-1]){
            return 0;
        }
    }
    return 1;
}