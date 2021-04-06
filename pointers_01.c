#include<stdio.h>


int main(){
int n;
    printf("enter the number");
    scanf("%d" , &n);

    int *ptr = &n;
        printf("the address of the given number is %u \n" , ptr);
        printf("the value stored at the address %u is %d", ptr , *ptr);


return 0;
}