/* Name: dweight_v1.c                                                  */
/* Purpose: Computes the dimensional wight of a 12" x 10" x 8" box  */
/* Author: K: N. King                                               */

#include <stdio.h>

int main(void)
{
    int height = 8, length= 12, width = 10, volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional wight (pounds): %d\n", (volume + 165)/166);

    return 0;
}