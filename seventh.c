#include <stdio.h>


int main(){
    int i,j=0,sum=0 ;
    for(i=1; i<11; i ++){
        j = 8 *i;
        //printf("%d * \n", j);
        sum +=j;
      //  printf("%d \n", sum);
    }
    printf("sum of all the numbers in table of 8 is : %d",sum);
    getch();
    
    return 0;
}