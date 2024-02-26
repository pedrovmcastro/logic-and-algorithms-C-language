/*Na transforma��o decimal para bin�rio, modifique o programa para que este obtenha o
valor bin�rio em uma vari�vel inteira, ao inv�s de imprimir os d�gitos um por linha na
tela. Dica: Suponha n = 7 (111 em bin�rio), e voc� j� computou x = 11, para "inserir"o
�ltimo d�gito 1 em x voc� deve fazer x = x + 100. Ou seja, voc� precisa de uma vari�vel
acumuladora que armazena as pot�ncias de 10: 1, 10, 100, 1000 etc.*/

#include <stdio.h>

int main()
{
    int decimal, soma = 0, pow10 = 1;

    scanf("%d", &decimal);

    while (decimal > 0) {
        if (decimal%2 == 1) {
            soma += pow10;
        }
        decimal = decimal/2;
        pow10 *= 10;
    }

    printf("%d", soma);

    return 0;
}
