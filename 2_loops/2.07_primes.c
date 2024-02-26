/*
Exercise 7:
Write a program that reads a number n, and then prints the smallest prime number that is greater than or equal to n,
and prints the largest prime number that is less than or equal to n.


(PT-BR)
Exercício 7:
Escreva um programa que lê um número n, e então imprime o menor número primo que é
maior ou igual n, e imprime o maior primo que é menor ou igual a n.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, smallestPrime, largestPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Smallest prime after n:
    for(int i = n;; i++) {
        int isPrime = 1;
        for(int j = 2; j < (int)sqrt(i) + 1; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }        
        }
        if(isPrime) {
            smallestPrime = i;
            break;
        }
    }

    // Largest prime before n:
    for(int i = n;; i--) {
        int isPrime = 1;
        for(int j = 2; j < (int)sqrt(i) + 1; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }        
        }
        if(isPrime) {
            largestPrime = i;
            break;
        }
    }

    printf("Largest prime before %d: %d\nSmallest prime after %d: %d\n", n, largestPrime, n, smallestPrime);

    return 0;
}