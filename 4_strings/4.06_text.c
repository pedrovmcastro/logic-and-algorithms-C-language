/*
Exercise 6:
Create a program that reads a text T (with spaces) and a word p from the keyboard. Then, the program should print all positions 
where the word p occurs in T.
For example, if T = "two bananas and 4 avocados. There will be no more bananas." and p = "bananas",
then the program should print 5 and 43.


(PT-BR)
Exercício 6:
Faça um programa que leia um texto T (com espaços) e uma palavra p do teclado. Em
seguida o programa deverá imprimir todas as posições onde ocorrem a palavra p em T .
Se por exemplo T = "duas bananas e 4 abacates. Nao havera mais bananas.", e p ="bananas",
então o programa deveria imprimir 5 e 43.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char T[140], word[20];
    int pos[80];
    int lengthT, lengthWord, k = 0, aux;

    // Input data:
    printf("Text:\n");
    fgets(T, 140, stdin);
    printf("Word: ");
    fgets(p, 20, stdin);

    // Length of the text and word:
    lengthT = strlen(T) - 1;
    lengthWord = strlen(word) - 1;

    // Search for the word in the text:
    for (int i = 0; i < lengthT; i++) {
        if (T[i] == word[0]) {
            aux = i;
            for (int j = 1, int i = i + 1; j <= lengthWord; j++, i++) {
                if (word[j] != T[i]) {
                    break;
                }
            }
            if (j == lengthWord) {
                pos[k] = aux;
                k++;
            }
        }
    }

    // Output:
    printf("Positions = ");
    for (int i = 0; i < k; i++) {
        if (i != k - 1) {
            printf("%d and ", pos[i]);
        } else {
            printf("%d", pos[i]);
        }
    }

    return 0;
}

