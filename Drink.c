#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int  sum=0;
    for(int i=1;i<=n;i++)
    {
        int num;
        scanf("%d",&num);
        sum+=num;
    }
    double result = sum/(double)n;

    printf("%.12f\n",result);

    return 0;
}