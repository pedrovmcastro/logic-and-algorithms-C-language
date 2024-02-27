/*
Exercise 9:
Historically, Caesar was the first to encode messages. He reorganized the text of his messages in a way that the text seemed 
to have no meaning. Each message always had a letter count whose total was equivalent to a square number, depending on how much 
Caesar had to write. Thus, a message with 16 characters used a four by four square; if it were 25 characters, it would be a five
by five; 100 characters required a ten by ten square, and so on. His officials knew that they had to transcribe the text by filling
in the squares whenever a random message arrived. By doing this, they could read the message vertically, 
and its meaning would become clear.
Write a program that reads the size of a string and then a string. The program then writes the decrypted message.

Example:
36
MEEUMOCSHMSC1T*AGU0A***L2****T*****A
This message can be transcribed into a perfect square of 6x6.
M E E U M O
C S H M S C
1 T * A G U
0 A * * * L
2 * * * * T
* * * * * A
Reading each column of the matrix (ignoring the '*' character), the output should be:
MC102 ESTA EH UMA MSG OCULTA.


(PT-BR)
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
    char msg[N + 1], mat[r][r], hiddenMsg[N + 1];
    int N, k = 0, r;

    // Input:
    scanf("%d", &N);
    getchar();

    r = sqrt(N);
    if (r * r != N)
    {
        printf("It is not a perfect square");
        return 1;
    }

    printf("Enter the encrypted message: ");
    fgets(msg, N + 1, stdin);

    // Transform the string into a matrix, following the example:
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++, k++)
        {
            mat[i][j] = msg[k];
        }
    }

    // Encrypted matrix
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Transform the matrix into another string:
    k = 0;
    for (int j = 0; j < r; j++)
    {
        for (int i = 0; i < r; i++, k++)
        {
            if (mat[i][j] != '*')
            {
                hiddenMsg[k] = mat[i][j];
            }
            else
            {
                hiddenMsg[k] = ' ';
                i = r;
            }
        }
    }
    hiddenMsg[k] = '\0';

    // Output:
    printf("The hidden message is %s", hiddenMsg);

    return 0;
}