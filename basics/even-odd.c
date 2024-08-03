/**
 * @file even-odd.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to check whether a number is even or odd.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is an even number", n);
    }
    else {
        printf("%d is an odd number", n);
    }
    return 0;
}