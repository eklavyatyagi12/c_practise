
#include<stdio.h>


int main(){
    int i=3 , *ptr = &i , **ptr2 = &ptr ;

    printf("the value of i is : %u", **ptr2);



return 0;
}