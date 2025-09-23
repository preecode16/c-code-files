#include<stdio.h>
#include<limits.h>

int main(){
    int n;

    printf("enter how many numbers you want to enter:");
    scanf("%d" , &n);

    if(n <= 4)
    {
        printf("please enter more than 4 digit\n");
        return 1;
    }

    int number[n];
    for(int i = 0; i < n; i++)
    {
        printf("enter mumber %d:" , i + 1);
        scanf(" %d" , &number[i]);
    }
    

    


    int largest = INT_MIN;
    int seclargest = INT_MIN;
    int smallest = INT_MAX;
    int secsmallest = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(number[i] > largest)
        {
            seclargest = largest;
            largest = number[i];
        }
        else if(number[i] < largest && number[i] > seclargest)
        {

            seclargest = number[i];
        }
        if(number[i] < smallest)

        {
            secsmallest = smallest;
            smallest = number[i];
        }
       else if(number[i] > smallest && number[i] < secsmallest)
       

        {
           secsmallest = number[i]; 
        }
    }
    printf("the largest number = %d\n" , largest);
    printf("the second largest number = %d\n" , seclargest);
    printf("the smallest number = %d\n" , smallest);
    printf("the second smallest number = %d\n" , secsmallest);

    return 0;
}


    