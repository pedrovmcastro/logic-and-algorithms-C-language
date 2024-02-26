/*

(PT-BR)
Exercício 8:
Implemente um programa que compute todas as soluções de equações do tipo
x1 + x2 + x3 + x4 = C
onde todas as variáveis x1, . . . , x4 são inteiras não negativas e C > 0 é uma constante
inteira. Melhore o seu programa com as seguinte ideias.
É Fixado x1, os valores possíveis para x2 são 0, . . . , C - x1. Fixado x1 e x2, os valores
possíveis para x3 são 0, . . . , C - x1 - x2. Fixados x1, x2, e x3, então x4 é unicamente
determinado.
*/

#include <stdio.h>

int main() {
    int C;
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    int x1, x2, x3, x4;
    for (x1 = 0; x1 <= C; x1++) {
        for (x2 = 0; x2 <= C - x1; x2++) {
            for (x3 = 0; x3 <= C - x1 - x2; x3++) {
                x4 = C - x1 - x2 - x3;
                printf(" x1 = %d, x2 = %d, x3 = %d, x4 = %d\n", x1, x2, x3, x4);
            }
        }
    }

    return 0;
}
