/* Name: volumeSphere_v1.c                                              */
/* Purpose: Calculate the volume of a sphere of radius equal to 10      */
/* Author: StringAndComp                                                */

#include <stdio.h>

#define PI 3.141592653f

int main(void)
{
    int radius;
    float volume;

    radius = 10;
    volume = 4.0f / 3.0f * PI * radius * radius * radius;

    printf("Volume of the sphere: %f\n", volume);

    return 0;
}