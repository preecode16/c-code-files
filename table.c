#include<stdio.h>
int main(){
int n;

printf("enter the number you want the table of:");
scanf("%d" , &n);
for(int i = 1; i<=30; i++){
    printf("%d * %d = %d\n:" , n , i , n*i);
}
 return 0;
}