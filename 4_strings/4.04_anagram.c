/*
Exercise 4:
Write a program that reads two words from the keyboard and determines if the second one is an anagram of the first. 
A word is an anagram of another if all the letters in one occur in the other, in the same number, regardless of the position. 
Examples: ROMA, MORA, ORAM, AMOR, RAMO are anagrams of each other.


(PT-BR)
Exercício 4:
Escreva um programa que leia duas palavras do teclado e determina se a segunda é um
anagrama da primeira. Uma palavra é um anagrama de outra se todas as letras de uma
ocorrem na outra, em mesmo número, independente da posição. Exemplos: ROMA, MORA,
ORAM, AMOR, RAMO são anagramas entre si.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Variable declaration:
    char word1[80], word2[80];
    int i, j, length;
    int matches, anagrams = 1;

    // Input:
    printf("First word:\n");
    fgets(word1, 80, stdin);
    printf("Second word:\n");
    fgets(word2, 80, stdin);

    // Comparison of words:
    // - Check if the words have the same length.
    // - Check if all letters in word1 are in word2.
    // - Check if all letters in word2 are in word1.

    length = strlen(word1) - 1;

    if (strlen(word1) == strlen(word2)) {
        for (i = 0; i < length; i++) {
            matches = 0;
            for (j = 0; j < length; j++) {
                if (word1[i] == word2[j]) {
                    matches++;
                }
            }
            if (matches == 0) {
                anagrams = 0;
                break;
            }
        }
        for (j = 0; j < length; j++) {
            matches = 0;
            for (i = 0; i < length; i++) {
                if (word1[i] == word2[j]) {
                    matches++;
                }
            }
            if (matches == 0) {
                anagrams = 0;
                break;
            }
        }
    }

    // Output:
    if (anagrams) {
        printf("They are anagrams");
    } else {
        printf("They are not anagrams");
    }

    return 0;
}