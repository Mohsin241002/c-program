#include<stdio.h>

int main(){
    int a=0 , n;
    printf("Input the amount of no's u want");
    scanf("%d",&n);
    do{
        printf("%d\n",a);
        a++;
    }while(a<n);
    return 0;
}