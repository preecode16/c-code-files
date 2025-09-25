#include<stdio.h>
#include<string.h>

int main(){
    char *name[] = {"preetham" , "sudeeksha" , "soumya" , "raghavendra" , "vani" , "shashikala" , "saanvi"};

    char sui [20];

    printf("enter a name to find:");
    scanf("%s" , &sui);

    for(int i = 0; i < 7; i++)
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
