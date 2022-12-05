// calculates 5% sales tax

#include <stdio.h>

int main(void)
{
    float pretax;

    printf("Enter sale price: ");
    scanf("%f", &pretax);
    printf("The price with tax added is: %.2f", pretax * 1.05f);

    return 0;
}