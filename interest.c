// calculates the remaining balance after payment 1, 2 and 3

#include <stdio.h>

int main(void)
{
    float balance, annual_rate, payment, monthly_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &annual_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    monthly_rate = annual_rate / 12 / 100;

    // I realise that I could use 3 variables for each month, but I'm not sure what's best practice
    // updating a single balance variable seemed cleaner, but I can see its limitations

    balance = (balance + (balance * monthly_rate)) - payment; //calculates balance after 1 month
    printf("Balance after first payment: %.2f\n", balance); // prints it

    balance = (balance + (balance * monthly_rate)) - payment; //calculates balance after 2 months
    printf("Balance after second payment: %.2f\n", balance); //prints it

    balance = (balance + (balance * monthly_rate)) - payment; //calculates balance after 3 months
    printf("Balance after third payment: %.2f\n", balance); //prints it

    return 0;

}