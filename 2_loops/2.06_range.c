/* 
    
(PT-BR)
Exercício 6:
Escreva um programa para ler n de nÚmeros do tipo float e imprimir quantos deles estão
nos seguintes intervalos: [0 . . . 25], [26 . . . 50], [51 . . . 75] e [76 . . . 100]. Por exemplo, para
n = 10 e os seguintes dez números 2.0, 61.5, !1.0, 0.0, 88.7, 94.5, 55.0, 3.1415, 25.5, 75.0,
seu programa deve imprimir:

    Intervalo [0..25]: 3
    Intervalo [26..50]: 0
    Intervalo [51..75]: 3
    Intervalo [76..100]: 2 
*/

#include <stdio.h>

int main()
{
    int n, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
    float x;

    printf("How many number will you enter? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%f", &x);

        if (x >= 0 && x <= 25) {
            cont1++;
        }
        else if (x >= 26 && x <= 50) {
            cont2++;
        }
        else if (x >= 51 && x <= 75) {
            cont3++;
        }
        else if (x >= 76 && x <= 100) {
            cont4++;
        }
    }

    printf("\nRange [0..25]: %d\nRange [26..50]: %d\nRange [51..75]: %d\nRange [76..100]: %d\n",
           cont1, cont2, cont3, cont4);

    return 0;
}
