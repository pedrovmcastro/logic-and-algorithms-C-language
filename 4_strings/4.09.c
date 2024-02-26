/*
Exercício 9:
Historicamente César foi o primeiro a codificar mensagens. Ele reorganizava o texto de
suas mensagens de maneira que o texto parecia não ter sentido. Cada mensagem sempre
possuía uma contagem de letras cujo total equivalia a um quadrado perfeito, dependendo
de quanto César tivesse que escrever. Assim, uma mensagem com 16 caracteres usava
um quadrado de quatro por quatro; se fossem 25 caracteres, seria cinco por cinco; 100
caracteres requeriam um quadrado de dez por dez, etc. Seus oficiais sabiam que deviam
transcrever o texto preenchendo as casas do quadrado sempre que uma mensagem aleatória
chegasse. Ao fazerem isso, podiam ler a mensagem na vertical e seu sentido se tornaria
claro.
Escreva um programa que lê o tamanho de uma string e em seguida uma string. Depois o
programa escreve a mensagem decifrada.
Exemplo:
36
MEEUMOCSHMSC1T*AGU0A***L2****T*****A
Esta mensagem pode ser transcrita em um quadrado perfeito 6x6.
M E E U M O
C S H M S C
1 T * A G U
0 A * * * L
2 * * * * T
* * * * * A
Lendo cada coluna da matriz (desconsiderando o caractere ’*’), a saída deve ser:
MC102 ESTA EH UMA MSG OCULTA.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int N, i, j, k=0, r;

    //entrada de dados:
    scanf("%d", &N);
    getchar();

    r = sqrt(N);
    if (r*r != N) {
        printf("nao eh um quadrado perfeito");
        return 0;
    }

    char string[N+1], mat[r][r], msgOculta[N+1];


    fgets(string, N+1, stdin);

    //transformar a string em uma matriz, conforme exemplo:
    for (i=0; i<r; i++) {
        for (j=0; j<r; j++, k++) {
            mat[i][j] = string[k];
        }
    }

    //matriz criptografada
    printf("\n");
    for(i=0; i<r; i++) {
        for (j=0; j<r; j++) {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //transformar a matriz em uma outra string:
    k=0;
    for (j=0; j<r; j++) {
        for (i=0; i<r; i++, k++) {
            if (mat[i][j] != '*') {
                msgOculta[k] = mat[i][j];
            }
            else {
                msgOculta[k] = ' ';
                i=r;
            }
        }
    }
    msgOculta[k] = '\0';

    //saida de dados
    //mensagem oculta:
    printf("%s", msgOculta);

    return 0;
}
