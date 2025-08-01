#include<stdio.h>
int main()
{
    long long int num;
    scanf("%I64d",&num);
   


    int count=0;
    for(int i=1;num!=0;i++)
    {
        int degit = num%10;
        if(degit==4 || degit==7){count++;}
        num=num/10;
    }
    
    if(count==4 || count==7){printf("YES\n");}
    else{printf("NO\n");}

    return 0;
}