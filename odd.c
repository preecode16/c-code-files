#include<stdio.h>
int main(){
    int n;
    
    
    printf("enter how many numbers you will enter:");
    scanf("%d" , &n);

    int number[n];
    int odd[n];
    int even[n];
    int odd_count = 0;
    int even_count = 0;


    for(int i = 0; i < n; i++)
    {
        printf("enter number %d:", i + 1);
        scanf(" %d" , &number[i]);

        if(number[i] % 2 == 0)
        {
            even[even_count] = number[i];
            even_count++;
        }
        else
        {
            odd[odd_count] = number[i];
            odd_count++;
        }
    }
 
    printf("\nthe odd numbers are:\n");
    for(int i = 0; i < odd_count; i++)
    {
        printf(" %d" ,odd[i]);
    }

    printf("\nthe even numbers are:\n");
    for(int i = 0; i < even_count; i++)
    {
        printf(" %d" ,even[i]);
    }
return 0;


}
