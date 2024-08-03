/**
 * @file swap-using-third-variable.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to swap two numbers using a third variable.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter two numbers (space separated): ");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d", b);
    return 0;
}