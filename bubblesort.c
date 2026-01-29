#include<stdio.h>
int main(){
    int numbers[30] = {5 , 25 ,7 , 26 , 8 , 24 , 9, 23, 10 , 22 , 1 , 21 ,19 , 16 , 27 , 20 , 3 , 4 , 6 , 2 , 15 , 12 , 30 , 13 , 11 , 28 , 14 , 17 , 29 , 18};

    int n = 30;

    for(int i = 0; i < n ; i++)
    {
          
          for(int j = 0; j < n - 1; j++)
          {
            int min_index = j + 1;
            if(numbers[j] > numbers[min_index])
            {
                int temp = numbers[j];
                numbers[j] = numbers[min_index];
                numbers[min_index] = temp;

            } 
            
          }
          
    }
    printf("the sorted elements are:");
    for(int i = 0; i < n; i++)
    {
        printf(" %d" , numbers[i]);
    }
    return 0;
}