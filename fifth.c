#include<stdio.h>

int main(){
     
    int i;
    printf("multiplication table of 10  in reversed order is: \n");

    for(i=10;i>0;i--){
        printf("10 * %d = %d",i,10*i);
        printf("\n");
    }  
   
    getch();
    return 0 ;



}