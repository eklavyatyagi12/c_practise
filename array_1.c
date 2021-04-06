#include<stdio.h>

int main(){
    int marks[5];

    for(int i =0 ; i<5; i++){
        printf("Enter the Marks of student %d :", i+1);
        scanf("%d", &marks[i]);
}
printf("*************************************************************************************** \n");
    for(int j = 0; j<5;j++){
        printf("The marks of student %d is : %d \n",j+1 , marks[j]);

}

return 0;
}