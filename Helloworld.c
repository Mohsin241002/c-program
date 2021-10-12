#include <stdio.h>
void main()
{
    int arr[2][2], i, j;
    int srr[2][2], x, y;
    int trr[2][2], m, n;

    printf("Enter the 1st matrix\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("Enter the 2nd matrix\n");
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
            scanf("%d", &srr[x][y]);
    }
    printf("The first mattrix is \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
    printf("The second mattrix is \n");
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
            printf("%d\t", srr[x][y]);
        printf("\n");
    }

    printf("\nAddition of both mattrix is \n");
    for (m = 0; m < 2; m++)
    {
        for (n = 0; n < 2; n++){
            trr[m][n]= arr[m][n] + srr[m][n];
            printf("%d\t",trr[m][n]);
        }
        printf("\n");
    }
}
