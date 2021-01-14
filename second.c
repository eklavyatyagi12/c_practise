#include <stdio.h>

int main(){
    int a;
    printf("enter a number to check divisiblity by 97 \n");
    scanf("%d", &a);
    if (a%97 == 0 & a != 0){
        printf("the number is divisible by 97");
        }
    else if(a%97 != 0 & a != 0){
        printf("number is not divisible");
    }
    else if(a==0){
        printf("number is zero");
    }
    

    return 0;
}