/*
Exercise 2:
Create a program that reads a string (possibly with spaces) of up to 80 characters from the keyboard and then saves the read string
in a new one, removing spaces.
Example input:
Out of the night that covers me
Resulting array:
Outofthenightthatcoversme
Modify the program in such a way that no additional array is used! In other words, we should remove spaces
from the original array of the read string without the use of any other auxiliary array.


(PT-BR)
Exercício 2:
Faça um programa que leia do teclado uma string (possivelmente com espaços) de até 80
caracteres e que então salve a string lida em uma nova removendo-se os espaços.
Exemplo de entrada:
Out of the night that covers me
e vetor resultante:
Outofthenightthatcoversme
Refaça o programa de tal forma que não seja utilizado nenhum vetor adicional! Ou seja
devemos deixar a string sem espaços no próprio vetor original da string lida sem o uso de
nenhum outro vetor auxiliar.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    int len;

    printf("Enter a string: ");
    fgets(str, 80, stdin);

    len = strlen(str);

    for (int i=0; i<len-1; i++){
        if (str[i] == ' '){
            len--;
            for (int j=i; j<len; j++) {
                str[j] = str[j+1];
            }
        }
    }

    printf("String without spaces: %s", str);

    return 0;
}
