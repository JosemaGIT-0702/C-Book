/* Name: dweight_v2.c                                   */
/* Purpose: Computes the dimensional wight of a box     */
/*          of dimensions given by the user             */
/* Author: K: N. King                                   */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166; 
    // The division is calculated so it will round up instead of down

    printf("\n\nDimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional wight (pounds): %d\n", weight);

    return 0;
}