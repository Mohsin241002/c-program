#include<stdio.h>

int ten_times(int); 

void main(){
    int a ;
    printf("enter a no between 1 to 100");
    scanf("%d",&a);
    ten_times(a);
    printf("the ten times of ur number is %d",a);
}

int ten_times (int a){
    int b;
    b=a;
    b= b*100;
    a=b;
    
}