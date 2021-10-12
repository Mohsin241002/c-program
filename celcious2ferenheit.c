#include<stdio.h>
float temprature(float celcious);

float temprature(float celcious){
    float convert;
    convert= (9.0/5.0*celcious)+32;
    return convert;
}

void main(){
    float celcious, ferenheit;
    printf("Input temprature in celcious = ");
    scanf("%f",&celcious);
    ferenheit=temprature(celcious);
    printf("The temprature in ferenheit is = %f",ferenheit);
}