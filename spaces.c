// Adding spaces to a statement

#include <stdio.h>

int main(void)
{
    int p = 1, q = 2, original_answer, answer;
    original_answer = (3*q-p*p) /3;
    answer = (3 * q - p * p) / 3;

    printf("original answer: %d\n", original_answer);
    printf("answer: %d\n", answer);

    return 0;
}