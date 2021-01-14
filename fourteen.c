#include <stdio.h> 

int main(){
    int i =3;
    int * j;
    j= &i;

    printf("the address of the variable is %u \n ", j);
    printf("the value of the variable is %d \n", *j);
    return 0;
    

}