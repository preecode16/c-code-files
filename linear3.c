#include<stdio.h>
#include<string.h>

int main(){
    char name[10][20] = {"preetham" , "sudeeksha" , "raghavendra" , "soumya" , "shashikala" , "vani" , "naveen" , "saanvi" , "thansvi", "soamappa" };
char sui[20];
    printf("enter your name:");
    scanf("%19s" , sui);

    for(int i = 0; i < 9; i++)
    {
        if(strcmp(name[i] , sui) == 0)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
    
}