/*
Exercise 2:
Write a function that calculates the greatest common divisor (GCD) of two numbers m and n passed as parameters. 
You should use the following rule for calculating the GCD, where m ≥ n:
mdc(m; n) = m se n = 0
mdc(m; n) = mdc(n; m%n) se n > 0
The function prototype should be:
int gcd(int m, int n);


(PT-BR)
Exercício 2:
Escreva uma função que calcule o máximo divisor comum de dois números m e n passados
por parâmetro. Você deve utilizar a seguinte regra do cálculo do mdc onde m ≥ n
mdc(m; n) = m se n = 0
mdc(m; n) = mdc(n; m%n) se n > 0
O protótipo da função deve ser:

int mdc(int m, int n);
*/

#include <stdio.h>

int gcd(int m, int n);

int main()
{
    int m, n;

    printf("Enter two values:\n");
    scanf("%d %d", &m, &n);

    if (m >= n) {
        printf("GCD: %d", gcd(m, n));
    }
    else {
        printf("GCD: %d", gdc(n, m));
    }

    return 0;
}

int gcd(int m, int n)
{
    int gcd, remainder;

    if (n == 0) {
        gcd = m;
    }
    else {
        do {
            remainder = m % n;
            if (remainder == 0) {
                gcd = n;
            }
            m = n;
            n = remainder;
        } while (remainder != 0);
    }

    return gcd;
}