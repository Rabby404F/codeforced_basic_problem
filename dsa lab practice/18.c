#include<stdio.h>
int main()
{
    int arr[6];
    int n;
    scanf("%d",&n);
    int cmp=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //sel sort
    for(int i=0;i<n-1;i++)
    {
        int minin=i;
        for(int j=i+1;j<n;j++)
        {   cmp++;
            if(arr[minin]>arr[j])
            {
                minin=j;
            }
        }
        int t=arr[i];      
        arr[i]=arr[minin];
        arr[minin]=t;
    }

    printf("Sorted array :");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("comparision %d\n",cmp);
}