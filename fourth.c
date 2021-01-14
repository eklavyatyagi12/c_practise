#include<stdio.h>

int main (){

    int num,i,j;

    printf("enter a number to print the table : \n");
    scanf("%d", &num);

    for(i=1;i<=10;i++){
        j=num * i;
        printf("%d * %d = %d",num,i,j);
        printf("\n");
        
    
    }getch();
    return 0;
}