#include<stdio.h>

int main(){
    int a=1,sum=0;
    do
    {
        sum = sum+a;
        a++;
    } while (a<=10);
    printf("the sum of first 10 natural nos is = %d", sum);
    return 0;
}