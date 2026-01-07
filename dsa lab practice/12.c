#include<stdio.h>
int main()
{
    char arr[7];
    scanf("%s",arr);

    for(int i=0;i<6-1;i++)
    {
        for(int j=0;j<6-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t;
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("%s",arr);
}