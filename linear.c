#include<stdio.h>

int main(){

    int numbers[] ={45 , 65 , 78 , 98 , 90 ,567 , 895 , 546};

    int n;
    printf("enter the number you want to find:");
    scanf("%d" , &n);

    for(int i = 0; i < 8; i++)
    {
       if(numbers[i] == n)
       {
        printf("found/n");
        return 0;
           }
        
        
    }
    printf("not found\n");
    return 1;;
}