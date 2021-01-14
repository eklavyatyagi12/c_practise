#include <stdio.h>

float avg(int x,int y,int z){
    float s = (float)(x+y+z)/3;
    return s;
}

int main (){
    int a,b,c;
    printf("enter 3 number : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float ans = avg(a,b,c);
    printf("average = %f", ans);

return 0;
}