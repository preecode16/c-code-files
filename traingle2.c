#include<stdio.h>

int main(){
    int n;

    printf("enter the size of pyramid:");
    scanf("%d" , &n);

    if(n < 0)
    {
        printf("enter a postive digit\n");
        return 1;

    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            printf(" ");

        }
        for(int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}