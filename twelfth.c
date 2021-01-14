#include<stdio.h>

int sum(int n){
    int j = 0;
    if(n>0){
    j = n + sum(n-1);
    }
    return j;
}

int main(){
    
    
    int num;

    printf("number of sum of natural numbers:");
    scanf("%d",&num);

    printf("sum  is : %d",sum(num));

    return 0;
}