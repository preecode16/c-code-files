#include<stdio.h>

int main(){

int n;
int m;

char op;

printf("enter number 1:");
scanf("%d" , &n);

printf("enter number 2:");
scanf("%d" , &m);


printf("choose operation(+ , - , / , * ):");
scanf(" %c" , &op);

switch(op)

{
    case '+':
    printf("the sum = %d\n" , n + m);
    break;

    case '-':
    printf("the difference = %d\n" , n - m);
    break;

case '/':
    printf("the division = %d\n" , n/m);
    break;

case '*':
    printf("the multiplication = %d\n" , n * m);
    break;






}

return 0;



}