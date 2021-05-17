#include<stdio.h>

void encryption(char toencrypt[]){
    char *ptr = toencrypt;
    while (*ptr != '\0'){
        *ptr += 2;
        ptr++ ;

    }
}

int main(){

char str[] = "hail hitler";

encryption( str);

printf("the encrypted text is %s" , str);

}