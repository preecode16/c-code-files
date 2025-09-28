#include<stdio.h>
const n = 3;

int main(){
    char *name[] = {"preetham" , "vani" , "raghavendra" };
    char *number[] = {"+91-808-862-9562" , "+91-984-424-5083" , "+91-994-599-6929"};

    char names[20];

    printf("enter your name:");
    scanf("%s" , name);

    for(int i = 0; i < n; i++)
    {
        if(strcmp(name[i] , names) == 0)
        
        {
            printf("found %d\n" , number[i]);
            return 0;
        }
    }
    print("not found\n");
    return 1;
}