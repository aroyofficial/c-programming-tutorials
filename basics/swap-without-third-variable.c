/**
 * @file swap-without-third-variable.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to swap two numbers without using a third variable.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers (space separated): ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d", b);
    return 0;
}