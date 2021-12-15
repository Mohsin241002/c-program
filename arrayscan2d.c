#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[10][10];
    int a, b, i, j;
    clrscr();
    printf("Enter the no of rows and columns  ");
    scanf("%d  %d", &a, &b);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            scanf("%d", &arr[i][j]);
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
            printf("%d  ", arr[i][j]);
        printf("\n");
    }
    getch();
}