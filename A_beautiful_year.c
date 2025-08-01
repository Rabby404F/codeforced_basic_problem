#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year :");
    scanf("%d",&year);

    int count=0;
    int a,b,c,d;

    int start = year+1;
    while(start!=0)
    {
        int degit= start%10;
        printf("Degit is = %d\n",degit);
        start=start/10;
    }
    return 0;
}