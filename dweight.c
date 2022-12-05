/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10, volume;

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

 /*
  * I tried out using a float instead, which seems more accurate,
  * not sure why we do the addition of 165 to use an integer
  *
    int height, length, width;
    float volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = volume / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %f\n", volume);
    printf("Dimensional weight (pounds): %.3f\n", weight);
 */

    return 0;
}