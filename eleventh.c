#include<stdio.h>

float convert(float celsius){

    float fahrenheit = (celsius * 1.8) + 32;
    
    return fahrenheit;

}


int main(){
    float temp;
    printf("enter the value of temp in celsius =\n");
    scanf("%f",&temp);

    printf("the value of %f C in fahrenheit is = %f", temp,convert(temp));

    return 0;
}