#include <stdio.h>

int main(){
    int i = 10,j=0;
     while(i>0){
         j+=i;
         i--;
     }
     
    printf("the sum of first 10 natural numbers is : %d", j);
    return 0;

}