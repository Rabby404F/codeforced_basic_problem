#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long result=0;
    

       if (n % 2 == 0)
        result = n / 2;
    else
        result = - (n + 1) / 2;
    
    printf("%lld\n",result);
    return 0;
}