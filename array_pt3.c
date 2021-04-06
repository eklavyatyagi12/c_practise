#include<stdio.h>

int main(){
    int multiply[10];

    for(int i = 0; i<10; i++){
        multiply[i] = 5 * (i+1);
    }

    for (int i = 0; i<10;i++){
        printf("the table of 5 is 5 x %d = %d \n", i+1 , multiply[i]);
    }

    return 0;
}