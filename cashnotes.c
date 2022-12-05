// Take a dollar value and shows you the smallest number of bills you can use.

#include <stdio.h>

int main(void)
{
    int startingvalue, twenties, tens, fives, ones, runningvalue;

    printf("Enter dollar amount: ");
    scanf("%d", &startingvalue);

    twenties = startingvalue / 20;
    runningvalue = startingvalue - (twenties * 20);
    tens = runningvalue / 10;
    runningvalue = startingvalue - (twenties * 20) - (tens * 10);
    fives = runningvalue / 5;
    runningvalue = startingvalue - (twenties * 20) - (tens * 10) - (fives *5);
    ones = runningvalue / 1;

    printf("You will need %d twenties\n", twenties);
    printf("You will need %d tens\n", tens);
    printf("You will need %d fives\n", fives);
    printf("You will need %d ones\n", ones);

    return 0;
}