/* Name: numberOfBills.c                                                                        */
/* Purpose: Calculates the minimal number of $20, $10, $5 and $1 bills to pay for the amount    */
/*          inserted by the user                                                                */
/* Author: StringAndComp                                                                        */

#include <stdio.h>

int main(void)
{
    float amount;
    int number20, number10, number05, number01;

    printf("Enter the amount of money: ");
    scanf("%f", &amount);
    
    number20 = amount / 20;
    number10 = (amount - 20 * number20) / 10;
    number05 = (amount - 20 * number20 - 10 * number10) / 5;
    number01 = (amount - 20 * number20 - 10 * number10 - 5 * number05);

    printf("\nYou have to give %d bills of 20$,\n", number20);
    printf("%d of 10$, %d of 5$ and %d of 1$\n", number10, number05, number01);

    return 0;
}