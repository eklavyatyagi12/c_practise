#include<stdio.h>


int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    
    if(*(ptr+2)== arr[2]){
        printf("true");
      
      }
      else 
      printf("false");




return 0;
}