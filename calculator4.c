#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    
    

    printf("how many numbers you want to enter: ");
    scanf("%d" , &n);
int number[n];
    char op;

    printf("choose the operation you want(+ , - , /(average) ,*):\n");
    scanf(" %c" , &op);

    for(int i = 0; i < n; i++)
    {
        printf("enter number %d:" , i + 1);
        scanf("%d" , &number[i]);
    }

    int sum = 0 , difference , product = 1;
    float average = 0;

    int largest  = INT_MIN;
    int seclargest = INT_MIN;
    int smallest = INT_MAX;
    int secsmallest = INT_MAX;

    



    switch(op)
    {

        case '+':
        for(int i = 0; i < n; i++)sum+= number[i];
        printf("the sum = %d\n" , sum);
        break;
        
        
        case '-':
        difference = number[0];
        for(int i = 1; i < n; i++)difference-= number[i];
        printf("the difference = %d\n" , difference);
        break;


        case '/':
        for(int i = 0; i < n; i++)average+= number[i];
        average/= n;
        printf("the average = %.2f\n" , average);
        break;

        case '*':
        for(int i = 0; i < n; i++)product*= number[i];
        printf("the product = %d\n" , product);
        break;

    }
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
    }
    for(int i = 0; i < n; i++)
    {
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
    printf("the seclargest number = %d\n" , seclargest);
    printf("the secsmallest number = %d\n" , secsmallest);
    printf("the smallest number = %d\n" , smallest);

    return 0;

    }


    
