/**
 * @file triangle-perimeter.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to find the perimeter of a triangle from the given three sides.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    int a, b, c, perimeter;
    printf("Enter the three sides (space separated): ");
    scanf("%d %d %d", &a, &b, &c);
    perimeter = a + b + c;
    printf("Perimeter: %d", perimeter);
    return 0;
}