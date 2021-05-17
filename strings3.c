#include <stdio.h>
#include<string.h>

int main(){

    char st1[30];
    char st2[30];
    int i=0;
    char c;


    printf("enter the first string \n");
    scanf("%s", st1 );
    printf("\n");

    printf("enter the second string character by character \n");
    
    while(c != '\n'){
        fflush(stdin);
        scanf("%c", &c);
        st2[i]=c;
        i++;
        
    }
    st2[i-1]= '\0';

    printf("the value of first string is : %s \n\n", st1);
    printf("the value of first string is : %s \n\n", st2);
    printf("\n");
    printf("the string compariosn %d", strcmp(st1,st2));

return 0;
}
