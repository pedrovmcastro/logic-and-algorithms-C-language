/*
Exercise 5:
Write a function that takes an array of real numbers and its size as parameters and returns the arithmetic mean of the numbers
in the array. The function prototype should be:

double mean(double a[], int s);


(PT-BR)
Exercício 5:
Escreva uma função que recebe um vetor de números reais e o seu tamanho por parâmetro
e devolve a média aritmética dos números do vetor. O protótipo da função deve ser:

double media(double v[], int tam);
*/

#include <stdio.h>

double mean(double a[], int s);

int main()
{
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    double arr[size];

    printf("Enter the values:\n");
    for(int i=0; i < size; i++) {
        scanf("%lf", &arr[i]);
    }

    printf("Mean: %.2lf", mean(arr, size));

}

double mean(double a[], int s)
{
    double sum=0;

    for(int i=0; i<s; i++){
        sum += a[i];
    }

    return sum/s;
} 