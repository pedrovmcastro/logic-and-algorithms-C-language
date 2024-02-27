/*
Exercise 10:
Write a program that reads a sequence of positive integers greater than 1 and saves them in an array.
The program should read an integer n representing the number of elements in the sequence,
then read the n numbers and save them in an array v. Assume that the maximum size of the sequence is 50.
The program should then print an n by n square where each position (i, j) (where i = 0, ..., n - 1 and j = 0, ..., n - 1)
should print 1 if the numbers v[i] and v[j] are coprime and 0 otherwise.
Pairs of numbers v[i] and v[j] are coprime if there is no divisor d > 1 that is common to both.
For example, 15 and 8 are coprime, as the divisors of 8, which are 2, 4, and 8, are not divisors of 15.
Below is an example execution of the program for n = 6 and v = [2, 3, 4, 5, 6, 7].

    v[0] v[1] v[2] v[3] v[4] v[5]
v[0]  0    1    0    1    0    1
v[1]  1    0    1    1    0    1
v[2]  0    1    0    1    0    1
v[3]  1    1    1    0    1    1
v[4]  0    0    0    1    0    1
v[5]  1    1    1    1    1    0

Note in the example that 2 (v[0]) is coprime to 3 (v[1]), 5 (v[3]), and 7 (v[5]).


(PT-BR)
Exercício 10:
Escreva um programa que leia uma sequência de números inteiros positivos maiores que
1 e os salva em um vetor. O programa deve ler um número inteiro n que representa o
número de elementos da sequência, depois em seguida os n números e os salvar em um
vetor v. Assuma que o tamanho máximo da sequência é 50.
O programa deve então imprimir um quadrado de n linhas por n colunas onde em cada
posição (i, j) (onde i = 0, . . . , n " 1 e j = 0, . . . , n " 1) deste quadrado deverá ser impresso
1 caso os números v[i] e v[j] sejam coprimos e 0 caso contrário.
Os pares de números v[i] e v[j] são coprimos se não há nenhum divisor d > 1 que seja
comum a ambos. Por exemplo 15 e 8 são coprimos, pois os divisores de 8, que são 2, 4 e 8,
não são divisores de 15. Abaixo temos um exemplo de execução do programa para n = 6
e v = [2, 3, 4, 5, 6, 7].

    v[0] v[1] v[2] v[3] v[4] v[5]
v[0]  0    1    0    1    0    1
v[1]  1    0    1    1    0    1
v[2]  0    1    0    1    0    1
v[3]  1    1    1    0    1    1
v[4]  0    0    0    1    0    1
v[5]  1    1    1    1    1    0

Note no exemplo que 2 (v[0]) é coprimo de 3 (v[1]), 5 (v[3]) e 7 (v[5]).
*/

#include <stdio.h>

int main()
{
    int n, d, coprimes;
    int v[50], mat2[50][50];

    // Number of elements in the sequence:
    printf("Vector size: ");
    scanf("%d", &n);

    if (n > 50) {
        printf("Invalid input (max=50)"); 
        return 1;
    }

    // Read vector:
    printf("Vector elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] <= 1) {
            printf("Add values greater than 1.\n");
            return 1;
        }
    }

    // Comparison of matrix elements to determine coprimes:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                mat2[i][j] = 0;
            } else {
                coprimes = 1;
                for (d = 2; d <= (v[i] < v[j] ? v[i] : v[j]); d++) {  //Iterates through all numbers from 2 to the minimum of v[i] and v[j].
                // This is done to optimize the loop and avoid checking divisors larger than the smaller of the two numbers.
                    if (v[i] % d == 0 && v[j] % d == 0) {
                        coprimes = 0;
                        break;
                    }
                }
                mat2[i][j] = coprimes;
            }
        }
    }

    // Print the mat2 matrix:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    return 0;
}