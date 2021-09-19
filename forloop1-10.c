#include<stdio.h>

int main(){
    int a, sum , n ;
    printf("Program to add sum of first n natural nos is =: \n");
    printf("Input the amount of nos u want to add =:");
    scanf("%d", &n);
    for(sum=0, a=1; a<=n ; a++){
        sum=sum+a;
    }
    printf("\nthe sum of all nos is = %d", sum);
    return 0;
}