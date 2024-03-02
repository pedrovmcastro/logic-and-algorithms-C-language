/*
Exercise 6:
Suppose we create a structure to store dates:

typedef struct {
    int day;
    int month;
    int year;
} Date;

Implement an algorithm that takes an array of dates as a parameter and returns the dates in chronological order.
The function prototype is:
    void sort(Date arr[], int size);
Hint: Sort the array separately for each of the fields.


(PT-BR)
Exercício 6:
Suponha que criamos uma estrutura para armazenar Datas:
typedef struct Data{
int dia;
int mes;
int ano;
}Data;
Implemente um algoritmo que receba um vetor de Datas como parâmetro e que retorne as
datas em ordem cronológica. Protótipo da função é:
void ordena(struct Data vet[], int tam);
Dica: Ordene o vetor separadamente por cada um dos campos.
*/

#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

void sort(Data arr[], int size);

int main() {
    Data dates[100] = {
        {1, 3, 2024},
        {25, 10, 1995},
        {27, 11, 2005},
        {12, 9, 1991},
        {23, 11, 2005}
    };

    sort(dates, 5);

    printf("Sorted Dates (DD/MM/YYYY):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d/%d/%d\n", dates[i].day, dates[i].month, dates[i].year);
    }

    return 0;
}

void sort(Data arr[], int size) {
    int changes = 1;

    while (changes) {
        changes = 0;

        for (int i = 0; i < size - 1; i++) {
            if (arr[i].year > arr[i + 1].year || 
               (arr[i].year == arr[i + 1].year && arr[i].month > arr[i + 1].month) ||
               (arr[i].year == arr[i + 1].year && arr[i].month == arr[i + 1].month && arr[i].day > arr[i + 1].day)) {
                // Swap
                Data tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                changes = 1;
            }
        }
    }
}
