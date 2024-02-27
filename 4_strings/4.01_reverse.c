/*
Exercise 1:
Create a program that reads a string (possibly with spaces) of up to 80 characters from the keyboard
and then saves the reverse of this string in a new string. 
Modify the program in such a way that no additional array is used! 
In other words, we should compute the reverse in the original array of the read string.


(PT-BR)
Exercício 1:
Faça um programa que leia do teclado uma string (possivelmente com espaços) de até 80
caracteres e que então salve a inversa desta string em uma nova string. Refaça o programa
de tal forma que não seja utilizado nenhum vetor adicional! Ou seja, devemos computar a
inversa no próprio vetor original da string lida.
*/

#include <stdio.h>

int main()
{
    char str[80], swap;
    int len;

    printf("Enter a string: ");
    fgets(str, 80, stdin);

    // Determine the length of the string:
    for (len = 0; (str[len] != '\0') && (str[len] != '\n'); len++)
        ;
    // Another way: length = strlen(str) (using the string.h library);

    // Determine the reverse:
    for (int i = 0, int j = len - 1; i < len / 2; i++, j--) {
        swap = str[j];
        str[j] = str[i];
        str[i] = swap;
    }

    // Output:
    printf("Reverse string: %s\n", str);

    return 0;
}
