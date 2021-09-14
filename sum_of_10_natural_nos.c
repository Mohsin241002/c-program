#include<stdio.h>

int main(){
    int a = 1, sum = 0,b;
    while (a<= 10){
        sum= sum + a;
        a++;
    }
    printf("The sum of first 10 natural nos is = %d",sum);
    return 0;
}