#include<stdio.h>
#include <string.h>


struct info{
    int sno;
    char name[20];
    float salary;
    
};

int main(){

struct info emp1,emp2;

emp1.sno = 100;
strcpy(emp1.name, "raju");
emp1.salary = 13040 ; 

printf("enter the value of sno for emp2 \n");
scanf("%d",&emp2.sno);
printf("enter the name of emp2 \n");
scanf("%s", emp2.name);
printf("enter salary of emp2 \n");
scanf("%f", &emp2.salary);

printf("____________________________________________________________\n");
printf("************************************************************ \n");
printf("%d\n", emp1.sno);
puts(emp1.name);
printf("%f\n",emp1.salary);


}