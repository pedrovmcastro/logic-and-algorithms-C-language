/*
Exercise 9:
Suppose a binary matrix represents connections between cities, and if a position (i, j) has the value 1, 
then there is a road from city i to city j. Consider the following example matrix:

0 1 1
0 0 0
1 0 0

In this case, there are available paths from city 0 to 1 and 2, and from 2 to 0.
For each item below, write a function that takes as parameters a square matrix indicating the roads between cities, 
an integer n corresponding to the dimensions of the matrix, and a response vector (which will have size n).
The function prototype should be:
void check(int mat[30][30], int n, int response[]);

• The function should determine cities with entry but no exit, indicating this in the response vector, where response[i] 
receives 1 if city i satisfies this property and 0 otherwise.

• The function should determine cities with exit but no entry, indicating this in the response vector, where response[i] 
receives 1 if city i satisfies this property and 0 otherwise.

• The function should determine isolated cities, indicating this in the response vector, where response[i] 
receives 1 if city i satisfies this property and 0 otherwise.


(PT-BR)
Exercício 9:
Suponha que uma matriz binária represente ligações entre cidades, e que, se uma posição
(i,j) possui o valor 1, então há uma estrada da cidade i para a cidade j. Seja o seguinte
exemplo de matriz:

0 1 1
0 0 0
1 0 0

Neste caso, há caminhos disponíveis da cidade 0 para a 1 e 2, e da 2 para 0.
Para cada item abaixo escreva uma função que recebe como parâmetro uma matriz quadrada indicando as estradas entre as cidades,
um inteiro n correspondendo as dimensões da matriz e um vetor resposta (que terá tamanho n). O protótipo da função deve ser:

void verifica(int mat[30][30], int n, int resposta[]);

• A função deve determinar as cidades com entrada e sem saída, indicando isto no vetor
resposta, tal que resposta[i] recebe 1 caso a cidade i satisfaça esta propriedade e 0
caso contrário.

• A função deve determinar as cidades com saída mas sem entrada, indicando isto no
vetor resposta, tal que resposta[i] recebe 1 caso a cidade i satisfaça esta propriedade
e 0 caso contrário.

• A função deve determinar as cidades isoladas, indicando isto no vetor resposta, tal
que resposta[i] recebe 1 caso a cidade i satisfaça esta propriedade e 0 caso contrário.
*/

#include <stdio.h>

void checkWithEntryNoExit(int mat[30][30], int n, int response[]);
void checkWithExitNoEntry(int mat[30][30], int n, int response[]);
void checkIsolated(int mat[30][30], int n, int response[]);

int main()
{
    int mat[30][30], response[30];
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

    printf("\nCities with entry but no exit:\n");
    checkWithEntryNoExit(mat, n, response);
    for(int i=0; i<n; i++){
        if(response[i] == 1){
            printf("City %d\n", i);
        }
    }
    printf("\n");

    printf("Cities with exit but no entry:\n");
    checkWithExitNoEntry(mat, n, response);
    for(int i=0; i<n; i++){
        if(response[i] == 1){
            printf("City %d\n", i);
        }
    }
    printf("\n");
    
    printf("Isolated cities:\n");
    checkIsolated(mat, n, response);
    for(int i=0; i<n; i++){
        if(response[i] == 1){
            printf("City %d\n", i);
        }
    }
    printf("\n");
    
    return 0;
}

void checkWithEntryNoExit(int mat[30][30], int n, int response[])
{
    for(int i=0; i<n; i++){
        int hasEntry=0, hasExit=0;
        for(int j=0; j<n; j++){
            if (mat[i][j] == 1){
                hasExit = 1;
            }
            if (mat[j][i] == 1){
                hasEntry = 1;
            }
        }
        if (hasEntry && !(hasExit)){
            response[i] = 1;
        }
        else{
            response[i] = 0;
        }
    }
}

void checkWithExitNoEntry(int mat[30][30], int n, int response[])
{
    for(int i=0; i<n; i++){
        int hasEntry=0, hasExit=0;
        for(int j=0; j<n; j++){
            if (mat[i][j] == 1){
                hasExit = 1;
            }
            if (mat[j][i] == 1){
                hasEntry = 1;
            }
        }
        if (!(hasEntry) && hasExit){
            response[i] = 1;
        }
        else{
            response[i] = 0;
        }
    }
}

void checkIsolated(int mat[30][30], int n, int response[])
{
    for(int i=0; i<n; i++){
        int hasEntry=0, hasExit=0;
        for(int j=0; j<n; j++){
            if (mat[i][j] == 1){
                hasExit = 1;
            }
            if (mat[j][i] == 1){
                hasEntry = 1;
            }
        }
        if (!(hasEntry) && !(hasExit)){
            response[i] = 1;
        }
        else{
            response[i] = 0;
        }
    }
}