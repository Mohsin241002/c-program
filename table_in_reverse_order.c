#include<stdio.h>

int main(){
    int no , i=10 ;
    printf("Input the no :- ");
    scanf("%d",&no);
    while(i>=1){
        printf("%d * %d = %d\n", no , i , no*i);
        i--;
    }
    return 0;
}