#include<stdio.h>

int main(){
    int option , fno , sno , radius , no ;
    float pi=3.14 ; 
    printf("\n 1.Addition of two no's \n 2.Area of circle \n 3.Square of two no's \n");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        printf("Input two numbers\n");
        scanf("%d%d",&fno,&sno);
        printf("%d + %d = %d ", fno, sno, fno+sno);
        break;
    
    default:
        printf("This option is not available");
        break;
    }
    return 0;
}
