/*
Exercise 3:
Write a function that takes a positive integer n as a parameter and returns an integer b such that b^k = n for some integer k,
and b is the smallest possible. For example, if n = 27, then the returned value should be 3; if n = 12, 
then the returned value should be 12. Do not use library functions in your solution. 
The function prototype should be:

int smallest_base_log(int n);


(PT-BR)
Exercício 3:
Escreva uma função que recebe um valor inteiro positivo n como parâmetro e devolve um
valor inteiro b tal que b^k = n para algum inteiro k, e b seja o menor possível. Por exemplo,
se n = 27 então o valor devolvido deve ser 3, já se n = 12 então o valor devolvido deve ser
12. Não use funções de bibliotecas na sua solução. O protótipo da função deve ser:

int menor_base_log(int n);
*/

#include <stdio.h>

int smallest_base_log(int n);

int main()
{
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("The number must be positive");
        return 1;
    }

    printf("Menor base: %d", smallest_base_log(n));

    return 0;
}

int smallest_base_log(int n)
{
    int product;

    for(int b=2; b <= n; b++) {

        product = 1;
        
        while(product < n){
            product *= b;
        }

        if (product == n) {
            return b;
        }
    }
}