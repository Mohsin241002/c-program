#include <stdio.h>

void main()
{
    int x1, x2, x3, y1, y2, y3, m1, m2;
    printf("The program to find points are colinear or not\n");
    printf("NOTE: while entering the values the 1st no is cordinates of x and 2nd is of y");
    printf("\nInput cordinates of 1st point\n");
    scanf("%d%d", &x1, &y1);
    printf("\nInput cordinates of 2nd point\n");
    scanf("%d%d", &x2, &y2);
    printf("\nInput cordinates of 3nd point\n");
    scanf("%d%d", &x3, &y3);
    m1 = ((x2 - x1) / (y2 - y1));
    m2 = ((x3 - x2) / (y3 - y2));
    if (m1 == m2)
        printf("The points are Colinear and cannot form a triangle");
    else
        printf("The points are not colinear");
}