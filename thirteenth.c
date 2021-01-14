#include<stdio.h>

void star(int x){

    if (x ==1) {
        printf("* \n");
        return;
    }

    star(x-1);
    for(int i = 0;i < (2*x-1) ;i++){
        printf("*");
    }
    printf("\n");

}


int main(){
    int num;
    printf("number of rows you want for pattern: \n");
    scanf("%d", &num);

    star(num);

}