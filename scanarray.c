#include <stdio.h>

void main()
{
    int arr[10];
    int a, i;
    clrscr();
    printf("Input the sixe of the array  ");
    scanf("%d", &a);
    printf("Input %d numbers\n", a);
    for (i = 0; i < a; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < a; i++)
        printf("\t%d", arr[i]);
    getch();
}