#include<stdio.h>
int main(){
char name [20];
int year_of_birth;
int current_year = 2025;

printf("enter your name:");
scanf("%s" , name);

printf("enter your year of birth:");
scanf("%d" , &year_of_birth);

int age = current_year - year_of_birth;

if(age >= 60)
{
    printf("the age of %s is %d\n" , name , age);
    printf("%s is a senior citizen\n" , name);
}
else{
    printf("the age of %s is %d\n" , name , age);
    printf("%s is not a senior citizen\n" , name);
}
}
    
