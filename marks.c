#include<stdio.h>
int main(){
int n;

printf("how many numbers you want to enter to calculate avearge:");
scanf("%d" , &n);

float numbers[n];
int sum = 0;
float average;

for(int i = 0; i < n; i++)
{
    printf("number %d: " , i + 1);
    scanf("%f" , &numbers[i]);
    sum+= numbers[i];
}
average = (float)sum/n;

printf("the average is = %.3f" , average);

return 0;
}
