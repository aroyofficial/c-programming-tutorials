/**
 * @file farenheit-to-celcius.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to convert the temparature from Farenheit to Celcius.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    float c, f;
    printf("Enter the temparature in Farenheit: ");
    scanf("%f", &f);
    c = ((f - 32) / 9) * 5;
    printf("%f Farenheit is equivalent to %f Celcius", f, c);
    return 0;
}