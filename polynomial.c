// calculates a specific polynomial for a given value of x

#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("The calculated value is %d\n", (3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x *x)) - (x * x) + (7 * x) - 6);
    printf("The evaluation result: %d\n", (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6);
    return 0;
}