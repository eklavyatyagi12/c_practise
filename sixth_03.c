#include <stdio.h>

int main(){
    int i=0,j=0;
    
    do{
        j += i;
        i++ ;
    }while(i<11);

    printf("%d", j);
    return 0;




}