#include<stdio.h>
#include<string.h>

int main(){

    char c[10];

    printf("enter the name:");
    scanf("%9s" ,&c);

    if(strcmp(c , "vani") == 0)
{
    printf("you are awesome %9s\n", c);

}

else if(strcmp(c , "preetham") == 0)

{
    printf("let's do some calisthencis %9s" , c);
}
else
{
    printf("hello %s\n" , c);
}

return 0;
}