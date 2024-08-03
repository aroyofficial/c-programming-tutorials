/**
 * @file vowel-consonants.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to check whether a character is vowel or consonant.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel", ch);
            break;
        default:
            printf("%c is a consonant", ch);
            break;
    }
    return 0;
}