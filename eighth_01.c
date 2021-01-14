#include <stdio.h>

int main(){
    int num,i=1,j=1;
    printf("ENTER THE NUMBER OF WHICH YOU WANT THE FACTORIAL : \n");
    scanf("%d", &num);

    while(i<num+1){
        j*=i;
        i++ ;

    }

    printf("%d ! = %d",num , j);
    getch();
    

    return 0;


}