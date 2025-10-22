#include<stdio.h>
int main(){
    int numbers[12] = {4, 5 , 7 , 8 , 9 , 12, 10 , 1 , 6 , 11 , 3 , 2 };

    int n = 12;

    for(int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < n; j++)
        
        {
            
          if(numbers[j] < numbers[min_index])
          {
         min_index = j;
          }
        }
        int temp = numbers[i];
        numbers[i] = numbers[min_index];
        numbers[min_index] =temp;


    }
    printf("the sorted elements are:");
    for(int i = 0; i < n; i++)
    {
        printf(" %d" , numbers[i]);

    }
    return 0;
}
