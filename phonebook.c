#include<stdio.h>
#include<string.h>


int main(){
    char name[3][20] = {"preetham" , "vani" , "raghavendra" };
    char number[3][20] = {"+91-808-862-9562" , "+91-984-424-5083" , "+91-994-599-6929"};

    char names[20];

    printf("enter your name:");
    scanf("%s" , names);

    for(int i = 0; i < 3; i++)
    {
        if(strcmp(name[i] , names) == 0)
        
        {
            printf("found %s\n" , number[i]);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}