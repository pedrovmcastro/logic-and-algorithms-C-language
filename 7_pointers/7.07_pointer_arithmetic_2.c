/*
Exercise 7:
Create a function that receives an array as a parameter and prints it. Do not use indices
to traverse the array, only pointer arithmetic. Dynamically allocate the array
with a size given by the user, and fill the values randomly.


(PT-BR)
Exercício 7:
Crie uma funcao que receba como parametro um array e o imprima. Nao utilize índices
para percorrer o array, apenas aritmetica de ponteiros. Aloque o vetor dinamicamente
com tamanho de elementos dado pelo usuário, e preencha os valores de forma randômica.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomArray(int *array, int size);
void printArray(int *array, int size);

int main()
{
    int N;
    printf("Array size: ");
    scanf("%d", &N);

    int *array = malloc(N * sizeof(int));

    if (array == NULL)
    {
        printf("Memory allocation failure.\n");
        return 1; // Return error code
    }

    randomArray(array, N);
    printArray(array, N);

    free(array);
    return 0;
}

void randomArray(int *array, int size)
{
    int c = 0;
    // Initializes the seed for the rand() function using the current time
    srand(time(NULL));
    // Fills the array with random values.
    while (c != size)
    {
        *array = rand() % 100; // Values between 0 and 99.
        array++;
        c++;
    }
}

void printArray(int *array, int size)
{
    int c = 0;
    while (c != size)
    {
        printf("%d ", *array);
        array++;
        c++;
    }
}