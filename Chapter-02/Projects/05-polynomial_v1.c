/* Name: polynomial_v1.c                                                                        */
/* Purpose: Evaluates 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6  at the value of x given by the user    */
/* Author: StringAndComp                                                                        */

#include <stdio.h>

int main(void)
{
    float pol, x;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    pol = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
    printf("The value of the polynomial is: %.2f\n", pol);

    return 0;
}