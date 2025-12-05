/* Name: volumeSphere_v2.c                                                          */
/* Purpose: Calculate the volume of a sphere of the radius inserted by the user     */
/* Author: StringAndComp                                                            */

#include <stdio.h>

#define PI 3.141592653f

int main(void)
{
    int radius;
    float volume;

    printf("Radius of the sphere: ");
    scanf("%d", &radius);

    volume = 4.0f / 3.0f * PI * radius * radius * radius;

    printf("Volume of the sphere: %f\n", volume);

    return 0;
}