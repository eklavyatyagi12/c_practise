#include <stdio.h>

int main(){

    int m,p,c;
    float total;
    
    printf("enter physics marks: \n");
    scanf("%d", &p);
    printf("enter chemistry marks \n");
    scanf("%d", &c);
    printf("enter maths marks \n");
    scanf("%d", &m);

    total = (p + c + m)/3 ;
    
    if (total < 40 || p < 33 || c < 33 || m < 33){
        printf("failed");
    }
    else {
        printf("you pass");
    }
    input("prompt:");
    return 0;

}
