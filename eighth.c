#include <stdio.h>

int main(){
    int num,i,j=1;
    printf("ENTER THE NUMBER OF WHICH YOU WANT THE FACTORIAL : \n");
    scanf("%d", &num);

    for(i=1; i< num+1;i++){
        j= j*i;
        printf("%d \n",j);

    }
        printf("the factorial of number %d is %d \n",num,j);


return 0;
}
