#include<stdio.h>

int main(){
    int array[3][4];

    for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
            printf("enter the %d %d element \n ", i+1, j+1);
            scanf("%d", &array[i][j]);
         }
    }
    for(int i=0;i<3;i++){
        for(int j =0;j<4;j++){
            printf(" %d ", array[i][j]);}}


return 0;

}