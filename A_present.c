#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d ",n);
        }
        else{printf("%d ",i);}
    }
}