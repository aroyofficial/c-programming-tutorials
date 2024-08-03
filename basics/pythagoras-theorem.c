/**
 * @file pythagoras-theorem.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to implement pythagoras theorem.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {
    float base, altitude, hypotenuse;
    printf("Enter the base and altitude (space separated): ");
    scanf("%f %f", &base, &altitude);
    hypotenuse = sqrt((base * base) + (altitude * altitude));
    printf("Hypotenuse: %f unit(s)", hypotenuse);
    return 0;
}