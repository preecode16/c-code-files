#include<stdio.h>

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
    return 0;
}