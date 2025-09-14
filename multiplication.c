#include<stdio.h>
int main(){
    int n;
    

    printf("enter which number you want the table of:");
    scanf("%d" , &n);

    for(int i = 1; i <= 20; i++)
    {
        printf("%d * %d = %d\n" , n , i , n * i);

    }
    return 0;
}


