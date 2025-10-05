#include<stdio.h>
#include<string.h>





typedef struct 
{
char name[20];
char number[20];

}
person;




int main(){
char names [20];

    person people[3] ={
        {"preetham" , "+91-808-862-9562"},
        {"vani" , "+91-984-424-5083"},
        {"raghavendra" , "+91-994-599-6929"}
    };
char searchname[20];

printf("enter your name:");
scanf("%19s" , searchname);


for(int i = 0; i < 3; i++)
{
if(strcmp(people[i].name , searchname) == 0)
{
    printf("Found %s\n" , people[i].number);
    return 0;
}
}
    
printf("not found\n");
return 1;
}


