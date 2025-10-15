#include<stdio.h>
int main(){
    int numbers[11] ={8 , 4 , 3 , 10 , 1 , 6 ,11 , 9 , 2 , 7 , 5} ;

    int n = 10;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++ )
        {
            int min_index = i;
            if(numbers[j] < numbers[min_index])
            {
                min_index = j;
            }
            int temp = numbers[i];
            numbers[i] = numbers[min_index];
            numbers[min_index] = temp; 


        }
    }
    printf("sorted elemnts are:");
    for(int i = 0; i < n; i++)
    {
        printf(" %d" , numbers[i]);
    }

return 0;
}