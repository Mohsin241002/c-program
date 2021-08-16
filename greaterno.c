#include <stdio.h>
int main()
{
    int fno, sno;
    printf("Please input the first no\n");
    scanf("%d", &fno);
    printf("Please input the second no.\n");
    scanf("%d", &sno);
    if (fno >= sno)
        printf("tThe first no is greater");
    else if (fno == sno)
        printf("Both the no's are same");
    else
        printf("The second no is greater");

    return 0;
}