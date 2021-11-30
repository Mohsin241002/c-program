#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter 3 nos = \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("first no is greater");
        else
            printf("third no is greater");
    }
    else
    {
        if (b > c)
            printf("second no is greater");
        else
            printf("third no is greater");
    }
}