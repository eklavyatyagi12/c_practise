#include <stdio.h>

int area(int side){
    int a = side * side ;
    return a;

}

int main(){
    int side,ar;
    printf("enter the side of square \n");
    scanf(" %d", &side);
    ar = area(side);
    printf("area of square of is %d",ar);


}