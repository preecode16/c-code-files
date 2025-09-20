#include<stdio.h>

int main(){

    int n , reversed = 0;

    printf("enter the number you wnt to reverse:");
    scanf("%d" , &n);

    while(n!= 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;


       
        
    }
    printf("reversed digit = %d" , reversed);

    return 0;
}