/*
Exercise 4:
Consider the Cell type defined below.

typedef struct {
    char character;
    int weight;
} Cell;

Given a vector 'vet' with n > 0 elements of type Cell, a sequence of two or more consecutive elements in the vector
such that the values in their 'character' fields are equal is called a range. For example, if the values in the 'character'
fields of 'vet' form the sequence "yyzzzya", there are two ranges in the vector: "yy" and "zzz".

Write a function that takes, as input, a vector of n > 0 elements of type Cell and returns, as output, 
the sum of the weights of all elements in the vector that belong to ranges. For example, for the sequence "yyzzzya",
if the weights of these elements are 10, 2, 5, 4, 5, 4, 3, your function should return the value 26.


(PT-BR)
Exercício 4:
Considere o tipo Cell definido abaixo.

typedef struct{
    char car;
    int peso;
} Cell;

Dado um vetor vet de n > 0 elementos do tipo Cell, uma sequência de dois ou mais elementos
consecutivos no vetor tais que o valor em seus campos car são iguais é chamada faixa. Por exemplo,
se os valores dos campos car de vet formam a sequencia "yyzzzya", existem duas faixas no vetor: "yy" e "zzz".

Escreva uma função que receba, como entrada, um vetor de n > 0 elementos do tipo Cell e devolva,
como saída, a soma dos pesos de todos os elementos do vetor que pertencem a faixas. Por exemplo,
para a sequência "yyzzzya", se os pesos destes elementos são 10,2,5,4,5,4,3 a sua função deve devolver o valor 26.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char character;
    int weight;
} Cell;

int sumRanges(Cell vet[], size_t n);

int main() {
    Cell vector[] = { //declaration of the example vector
        {'y', 10},
        {'y', 2},
        {'z', 5},
        {'z', 4},
        {'z', 5},
        {'y', 4},
        {'a', 3},
    };

    size_t n = sizeof(vector) / sizeof(vector[0]); //checks the number of elements in the vector

    printf("%d\n", sumRanges(vector, n));

    return 0;
}

int sumRanges(Cell vet[], size_t n) {

    int sum = 0;
    int started = 0; // changes to true when a range starts

    for (int i = 1; i < n; i++) {
        if (vet[i].character == vet[i - 1].character) {
            if (started) {
                sum += vet[i].weight;
            }
            else {
                started = 1;
                sum += vet[i].weight + vet[i - 1].weight; // the first time always adds the previous weight
            }
        }
        else {
            started = 0;
        }
    }

    return sum;
}