#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/boundary.h"

void draw_boundary(int boundaryLength, int boundaryWidth)
{
    unsigned char lengthChar = 196; // '─'
    unsigned char widthChar = 179; // '│'

    unsigned char upperLeftCorner = 218; // '┌'
    unsigned char lowerLeftCorner = 192; // '└'
    unsigned char upperRightCorner = 191; // '┐'
    unsigned char lowerRightCorner = 217; // '┘' 

    printf("%c", upperLeftCorner);

    int i;
    for(i = 0; i < 2 * boundaryLength - 2; i++) {
        printf("%c", lengthChar);
    }

    printf("%c\n", upperRightCorner);

    char* format = malloc(get_digit_count(2 * boundaryLength - 1) + 5);
    snprintf(format, get_digit_count(2 * boundaryLength - 1) + 5, "%c%%%dc\n", widthChar, 2 * boundaryLength - 1);

    for(i = 0; i < boundaryWidth - 2; i++) {
        printf("%s", format, widthChar);
    }
    
    free(format);

    printf("%c", lowerLeftCorner);

    for(i = 0; i < 2 * boundaryLength - 2; i++) {
        printf("%c", lengthChar);
    }

    printf("%c", lowerRightCorner);
}

int get_digit_count(int number)
{
    int digitCount = 0;
    while(number > 0) {
        number /= 10;
        digitCount++;
    }

    return digitCount;
}