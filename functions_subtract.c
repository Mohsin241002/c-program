#include <stdio.h>
int subtract();
int subtract(int a, int b)
{
    int diff;
    diff = a - b;
    return diff;
}

void main()
{
    int fno, sno, dif;
    printf("Input first no =  ");
    scanf("%d", &fno);
    printf("\nInput second no = ");
    scanf("%d", &sno);
    dif = subtract(fno, sno);
    printf("\nThe result is = %d", dif);
}