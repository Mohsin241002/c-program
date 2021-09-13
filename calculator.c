#include<stdio.h>

void main(){
    long int a , b;
    char operator;
    printf("Enter what u want to do\n");
    printf("NOTE:: press enter instead of sapce bar\n and this program can only perform operations between two nos\n");
    scanf("%d %c %d", &a, &operator, &b);
    // printf("%d %c %d", a, operator, b);

    if(operator==43)
    printf("%d", a+b);
    else if(operator==45)
    printf("%d", a-b);
    else if(operator==42)
    printf("%d",a*b);
    else
    printf("%d", a/b);
}