#include<stdio.h>
int main()
{
    long long int n;
    printf("Enter your number :");
    scanf("%I64d",&n);
   

    
    int count=0;
    int degit;

    while(n!=0)
    {
       degit=n%10;
      if(degit == 7 || degit == 4)
      {  count++;
         n=n/10;
       }
    }
    
    if(count==4 || count == 7)
    {
        printf("YES\n");
    }
    else{printf("NO\n");}

    return 0;


}