// fibonacci series in functions

#include <stdio.h>
void fibonacciSeries();

void fibonacciSeries(int a, int b)
{
    static int sum;

    sum = a + b;
    printf("%d\t", sum);
    a = b;
    b = sum;
    if (sum <= 100)
        fibonacciSeries(a, b);
}

void main()
{
    int fno, sno;
    fno = 0;
    sno = 1;
    printf("%d\t%d\t", fno, sno);
    fibonacciSeries(fno, sno);
}