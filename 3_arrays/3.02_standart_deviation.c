/*
Exercise 2:
Write a program that read an array at most 50 float numbers, and calculates the standart deviation of these values.


(PT-BR)
Exercício 2:
Escreva um programa que leia um vetor de até 50 números reais e calcule o desvio padrão
destes valores. 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float arr[50], stdDev, sum=0, summation=0, mean;

    printf("How many values? ");
    scanf("%d", &n);

    printf("Enter the values:\n");
    for (i=0; i<n; i++)
        scanf("%f", &arr[i]);

    for (i=0; i<n; i++)
        sum += arr[i];

    mean = sum/n;

    summation = 0;
    for (i=0; i<n; i++)
        summation += pow(arr[i] - mean, 2.0);

    stDdev = sqrt((1.0/(n-1))*summation);

    printf("Standart deviation: %f", stDdev);

    return 0;
}
