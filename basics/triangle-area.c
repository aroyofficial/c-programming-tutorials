/**
 * @file triangle-area.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to find the area of a triangle from the given base and height.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    float base, height, area;
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the height: ");
    scanf("%f", &height);
    area = base * height / 2;
    printf("Area: %f sq. unit(s)", area);
    return 0;
}