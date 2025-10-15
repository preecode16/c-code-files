#include<stdio.h>
int main(){
    int numbers[20] = {5 , 7 , 8 , 9, 10 , 1 , 19 , 16 , 20 , 3 , 4 , 6 , 2 , 15 , 12 , 13 , 11 , 14 , 17 , 18};

    int n = 20;

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
                numbers[min_index] = temp;
            
        
    }
printf("the sorted elements are:");
for(int i = 0; i < n; i++)
{
    printf(" %d" , numbers[i]);
}

return 0;
}