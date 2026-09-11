/* Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */

#include <stdio.h>

int main()
{
    int length, breadth;
    scanf("%d %d", &length, &breadth);
    printf("Area=%d, Perimeter=%d\n", length * breadth, 2 * (length + breadth));
    return 0;
}