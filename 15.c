#include <stdio.h>



void address(int a){
    printf("the address of vatiable after passing through function is: %u \n", &a);
}

int main(){
    int i =4 ;
    printf("the addess of i is : %u \n", &i );
    address(i);


}