#include <stdio.h>
int average(int a, int b, int c);

int average(int a, int b, int c)
{
    int avg = (a + b + c) / 3;
    return avg;
}

void main()
{
    int fno, sno, tno, avg;
    printf("Input three nos\n");
    scanf("%d %d %d", &fno, &sno, &tno);
    avg = average(fno, sno, tno);
    printf("The average of three nos is = %d", avg);
}