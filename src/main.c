#include <stdio.h>
#include "../include/boundary.h"

int main()
{
    int boundaryLength, boundaryWidth;
    printf("Enter boundary length: ");
    scanf("%d", &boundaryLength);

    printf("Enter boundary width: ");
    scanf("%d", &boundaryWidth);
    
    draw_boundary(boundaryLength, boundaryWidth);
    
    char c = getchar();
    c = getchar();

    return 0;
}