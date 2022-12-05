/* Author: Craig Errington
 * This file is an attempt at declaring integer variables,
 * doing some maths, and then printing the answer along with the input
 * values over multiple lines, using a single call to the printf function
 */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;

    printf("The volume is %d\nfrom a defined height of %d\na length of %d\nand a width of %d", volume, height, length, width);
    return 0;
}