#include<stdio.h>


int main(){

  int n;

  printf("enter number:");
  scanf("%d", &n);

  int x;



  int odd[n];
  int even[n];
  int odd_count = 0;
  int even_count = 0;

  for(int i = 0; i < n; i++)
  {
printf("enter number %d: ", i + 1);
scanf("%d" , &x);

if(x % 2 != 0)
{
  odd[odd_count] = x;
  odd_count++;
}
else
{
  even[even_count] = x;
  even_count++;
}


  }
  printf("the odd numbers are:\n");
for(int i = 0; i < odd_count; i++)
{
  printf("%d ", odd[i]);

}
printf("\n");

printf("the even numbers are:\n");
for(int i = 0; i < even_count; i++)
{
  printf("%d " , even[i]);
}


return 0;
}

