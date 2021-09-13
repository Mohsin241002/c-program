#include <stdio.h>
void main()
{
    int fno, sno, tno;
    printf("Please input first no\n");
    scanf("%d", &fno);
    printf("Please input second no\n");
    scanf("%d", &sno);
    printf("Please input thirn no\n");
    scanf("%d", &tno);
    if (fno > sno)
    {
        if (fno > tno)
            printf("The largerst no is %d", fno);
        else
            printf("the largest no is %d", tno);
    }
    else
    {
        if (sno < tno)
            printf("The largest no is %d", tno);

        else
            printf("The largest no is %d", sno);
    }

}