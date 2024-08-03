/**
 * @file circle.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to find the circumference and area of a circle from the given radius.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    float radius, circumference, area;
    const float PI = 3.12;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Circumference: %f unit(s)", circumference);
    printf("Area: %f sq. unit(s)", area);
    return 0;
}