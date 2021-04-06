#include<stdio.h>

void sumANDavg(int i, int j, int *sum,float *avg){

    *sum = i+j;
    *avg = (float)(i+j)/2;

}


int main(){
    int a,b,sum;
    float avg;
    printf("enter the number:\n");
    scanf("%d",&a);
        printf("enter the number:\n");
        scanf("%d",&b);
    
    sumANDavg(a,b,&sum,&avg);
        printf("sum and avg of numbers is : %d, %f",sum, avg );


    
    return 0;

}