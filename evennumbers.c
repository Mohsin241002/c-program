// printing all even nos

#include <stdio.h>

void main()
{
    int a, n;
    printf("print all even numbers till = :");
    scanf("%d", &n);                                     //taking input from user
    for (a = 0; a < n; a += 2)
    {
        printf("%d\t", a);
    }
}