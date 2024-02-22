/*
Exercise 3:
Create a program that reads the values corresponding to the three sides a, b, and c of a triangle.
The program then determines whether the triangle is isosceles, scalene, or equilateral,
informing this to the user, and then prints the area A of the triangle using the Heron's formula:

A = sqrt(s * (s-a) * (s-b) * (s-c))
where
s = (a+b+c)/2


(PT-BR)
Exercício 3: 
Faça um programa que leia os valores correspondentes aos três lados a, b e c de um triângulo. 
O programa então determina se o triângulo é isósceles, escaleno ou equilátero,
informando isto para o usuário, e em seguida imprime a área A do triângulo utilizando a fórmula de Heron:

A = sqrt(s*(s-a)*(s-b)*(s-c))
onde
s = (a+b+c)/2
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, A;

    printf("Enter the values of the three sides:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b || a == c || b == c) {
        if (a == b && a == c) {
            printf("Equilateral\n");
        }
        else {
            printf("Isosceles\n");
        }
    }
    else {
        printf("Scalene\n");
    }

    s = (a + b + c)/2;
    A = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("AREA: %.3f\n", A);

    return 0;
}
