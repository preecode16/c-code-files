#include<stdio.h>
void separate_odd_even(int*n ,int numbers[] , int odd[] , int even[] , int*odd_count , int*even_count);
int main(){
    int n;
    
    int odd_count = 0 , even_count = 0;

    printf("enter how many numbers you want to enter:");
    scanf("%d" , &n);

    int numbers[n];
    int odd[n];
    int even[n];
    

    for ( int i = 0; i < n; i++)
    {
        printf("enter number %d:" , i + 1);
    scanf("%d" , &numbers[i]);
    }
    

    separate_odd_even(&n ,numbers , odd , even , &odd_count , &even_count);

    printf("the odd numbers are:\n");
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
void separate_odd_even(int*n ,int numbers[] , int odd[] , int even[] , int*odd_count , int*even_count)
{

    for(int i = 0; i < *n; i++){
    if(numbers[i] % 2 == 0)
    {
     even[*even_count] = numbers[i];
     (*even_count)++;
    }
    else
    {
     odd[*odd_count] = numbers[i];
     (*odd_count)++;
    }
}
}


