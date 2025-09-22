#include<stdio.h>

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
    

    int largest , smallest , seclargest , secsmallest;


    if(number[0] > number[1])
    {
        largest = number[0];
        seclargest = number[1];
        smallest = number[1];
        secsmallest = number[0];
    }
    else{
        largest = number[1];
        seclargest = number[0];
        smallest = number[0];
        secsmallest = number[1];
    }

    for(int i = 2; i < n; i++)
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


    