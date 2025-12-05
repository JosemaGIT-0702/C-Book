/* Name: taxedPricing.c                                                             */
/* Purpose: Takes the inserted amount of money and adds to it a 5% tax              */
/* Author: StringAndComp                                                            */

#include <stdio.h>

#define TAX 0.05f

int main(void)
{
    float price, taxedPrice;

    printf("Enter an ammout: ");
    scanf("%f", &price);

    taxedPrice = (1 + TAX) * price;
    printf("With tax added: %.2f\n", taxedPrice);

    return 0;
}