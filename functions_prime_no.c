// prime no from user using recursion

#include <stdio.h>
void prime();

void prime(int no)
{
    static int a = 3;
    if (a != no)
    {
        if (no % a == 0)
        {
            printf("The no is not prime");
            return;
        }
        else
        {
            a += 2;
            prime(no);        //--->Recursion
        }
    }
    else
    {
        printf("The no is Prime");
        return;
    }
}

void main()
{
    int no;
    printf("Enter a number\t");
    scanf("%d", &no);
    if (no % 2 == 0)
        printf("The no is not prime");
    else
        prime(no);
}