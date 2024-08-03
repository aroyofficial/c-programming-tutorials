/**
 * @file celcius-to-farenheit.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to convert the temparature from Celcius to Farenheit.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    float c, f;
    printf("Enter the temparature in Celcius: ");
    scanf("%f", &c);
    f = ((9 * c) / 5) + 32;
    printf("%f Celcius is equivalent to %f Farenheit", c, f);
    return 0;
}