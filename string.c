#include<stdio.h>
#include<string.h>

int main(){

    char c[10];

    printf("enter the name:");
    scanf("%s" ,&c);

    if((strcmp(c , "vani") == 0) || (strcmp(c , "naveen") == 0 ) )
{
    printf("you are awesome %s", c);

}

else if((strcmp(c , "preetham") == 0) || (strcmp(c , "nishanth" ) == 0))

{
    printf("let's do some calisthencis %s" , c);
}
else
{
    printf("hello %s\n" , c);
}

return 0;
}