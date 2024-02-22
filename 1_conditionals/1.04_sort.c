/*
Exercise 4:
Create a program that reads three numbers and print them in ascending order.


(PT-BR)
Exercício 4:
Escreva um programa lê três números e os imprime em ordem (ordem crescente).
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        if (b <= c) {
            printf("Sorted order: %d %d %d\n", a, b, c);
        } else {
            printf("Sorted order: %d %d %d\n", a, c, b);
        }
    } else if (b <= a && b <= c) {
        if (a <= c) {
            printf("Sorted order: %d %d %d\n", b, a, c);
        } else {
            printf("Sorted order: %d %d %d\n", b, c, a);
        }
    } else {
        if (a <= b) {
            printf("Sorted order: %d %d %d\n", c, a, b);
        } else {
            printf("Sorted order: %d %d %d\n", c, b, a);
        }
    }

    return 0;
}