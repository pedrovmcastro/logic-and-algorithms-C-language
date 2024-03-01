/*
Exercise 4:
A positive integer n is Pythagorean if there are positive integers a and b such that a² + b² = n. 
For example, 13 is Pythagorean because 2² + 3² = 13.

(a) Write a function that takes three integers a, b, and n as parameters and returns 1 if a² + b² = n, and 0 otherwise.
The function prototype should be:

int test(int a, int b, int n);

(b) Use the function from the previous item and write another function that takes a positive integer n as a parameter
and checks if n is a Pythagorean number, returning 1 if n is Pythagorean and 0 otherwise. 
The function prototype should be:

int pythagorean(int n);


(PT-BR)
Exercício 4: 
Um inteiro positivo n é pitagórico se existem inteiros positivos a e b tais que a² + b² = n.
Por exemplo, 13 é pitagórico pois 2² + 3² = 13.

(a) Escreva uma função que recebe como parâmetro três inteiros a, b e n, e que devolve
1 caso a² + b² = n e devolve 0 caso contrário. O protótipo da função deve ser:

int teste(int a, int b, int n);

(b) Utilize a função do item anterior e escreva uma outra função que recebe como parâmetro um inteiro positivo n e verifica
se n é pitagórico, devolvendo 1 caso n seja pitagórico e 0 caso contrário. O protótipo da função deve ser:

int pitagorico(int n);
*/

#include <stdio.h>
#include <math.h>

int test(int a, int b, int n);

int pythagorean(int n);

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(pythagorean(num)) {
        printf("Is Pythagorean\n");
    }
    else {
        printf("Is not Pythagorean\n");
    }

    return 0;
}

int test(int a, int b, int n)
{   
    if (pow(a, 2) + pow(b, 2) == n) {
        return 1;
    }
    else {
        return 0;
    }
}

int pythagorean(int n)
{
    int a, b=1;

    for(a=1; pow(a, 2) + pow(b, 2) <= n; a++) {
        
        for(b=a; pow(a, 2) + pow(b, 2) <= n; b++) {
            if (test(a, b, n)) {
                return 1;
            }
        }
        b = a + 1;
    }
    return 0;
}