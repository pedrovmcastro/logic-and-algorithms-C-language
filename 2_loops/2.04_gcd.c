/* 
Exercise 4:
Create a C program that calculates the greatest common divisor of two numbers, m and n.
You should use the following rule for calculating the GCD with m >= n:
GCD(m, n) = m if n = 0
GCD(m, n) = GCD(n, m%n) if n > 0


(PT-BR)
Exercício 4:
Faça um programa em C que calcule o máximo divisor comum de dois números m, n.
Você deve utilizar a seguinte regra do cálculo do mdc com m >= n
mdc(m, n) = m se n = 0
mdc(m, n) = mdc(n, m%n) se n > 0 
*/

#include <stdio.h>

int main() 
{
    int m, n, gcd, remainder;

    printf("Enter two values:\n");
    scanf("%d %d", &m, &n);

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

    if (gcd < 0) {
        gcd = -gcd;
    }

    printf("GCD: %d\n", gcd);

    return 0;    
}