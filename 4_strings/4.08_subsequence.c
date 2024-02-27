/*
Exercise 8:
Write a program that reads two words and checks if one of them can be obtained by removing letters from the other.
The order of the letters cannot be changed.
For example:
"moda" is a subsequence in "moradia"
"cereja" is a subsequence in "cerveja"


(PT-BR)
Exercício 8:
Faça um programa que leia duas palavras e verifique se uma delas pode ser obtida por
meio da remoção de letras da outra. A ordem das letras não pode ser alterada.
Por exemplo:
moda é uma subsequência em moradia
cereja é uma subsequência em cerveja
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char word1[50], word2[50], swap[50];
    int len1, len2, temp;
    int allLetters = 0, sameOrder = 0;

    // Input data:
    printf("Enter the words:\n");
    fgets(word1, 50, stdin);
    fgets(word2, 50, stdin);

    // Remove the newline character '\n':
    word1[strcspn(word1, "\n")] = '\0';
    word2[strcspn(word2, "\n")] = '\0';

    // Size of the strings:
    len1 = strlen(word1);
    len2 = strlen(word2);

    // Swap the order of words in case the user inputs the longer string first:
    if (len1 > len2) {
        strcpy(swap, word1);
        strcpy(word1, word2);
        strcpy(word2, swap);
        len1 = strlen(word1);
        len2 = strlen(word2);
    }

    // Check if word 2 has all the letters of word 1:
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (word1[i] == word2[j]) {
                allLetters++;
                break;
            }
        }
    }
    if (allLetters != len1) {
        allLetters = 0;
    }

    // Check if the letters are in the same order:
    temp = len1;
    if (allLetters) {
        for (int i = 0; i < len1; i++) {
            int k;
            for (int j = 0; j < len2; j++) {
                if (word1[i] == word2[j]) {
                    k = j;
                    break;
                }
            }
            if (k < temp) {
                sameOrder = 1;
                temp++;
            }
        }
    }

    if (sameOrder) {
        printf("%s is a subsequence in %s\n", word1, word2);
    } else {
        printf("There is no subsequence\n");
    }

    return 0;
}