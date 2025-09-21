#include <stdio.h>
#include<limits.h>

int main(void){
     long long n;

    if (scanf("%lld" , &n) != 1)return 1;

    int  sign =  (n < 0) ? -1: 1;
     unsigned long long x = (n < 0) ? (unsigned long long)(-n): (unsigned long long)n;

     unsigned long long rev = 0;

     while(x!= 0)
     {
        int digit = x % 10;
        if(rev > (ULLONG_MAX - digit) / 10)
        {
            fprintf(stderr , "error: overflow while reversing\n");
            return 1;

        }
        rev = rev * 10 + digit;
        x /= 10;
     }

     long long result = (long long)rev *sign;
     printf("the reversed digit is = %lld\n" , result);

     return 0;
    }


        
    




