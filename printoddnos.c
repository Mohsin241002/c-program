// print all odd nos between 20 to 30
#include<stdio.h>

void main(){
    int a;
    printf("odd nos between 20 to 30 are =:");
    for(a=20;a<30;a++)
    {
        if(a%2==1)
        printf("%d\t",a);
    }

}