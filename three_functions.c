#include<stdio.h>
void goodmorning();
void goodevening();
void goodafternoon();
void brunchtime();
void snacktime();
void nighttime();

void main(){
    goodmorning();
    goodafternoon();
    goodevening();
    printf("The program is completed");
}

void goodmorning(){
    printf("This in morning\n");
    brunchtime();

}

void goodafternoon(){
    printf("This is afternoon\n");
    snacktime();
}

void goodevening(){
    printf("This is evening\n");
    nighttime();
}

void brunchtime(){
    printf("This is brunchtime\n");
}

void snacktime(){
    printf("This is snacktime\n");
}

void nighttime(){
    printf("This is night\n");
}