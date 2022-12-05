// calculates the volume of a sphere

#include <stdio.h>
#define PI 3.14159265359

int main(void)
{
    float volume, radius;

    printf("Enter your sphere radius: ");
    scanf("%f", &radius);
    volume = (4.0f/3.0f) * PI *  radius * radius * radius;

    printf("The volume of the sphere is %.2f\n", volume);

    return 0;
}