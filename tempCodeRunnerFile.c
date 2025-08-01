#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    int arr[num];
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }

    int low=arr[0];

    for(int i=1;i<num;i++)
    {
        if(arr[i]<low)
        {
            low=arr[i];
        }
    }
    
   int count=0;
    int first=arr[0];
    for(int i=1;i<num;i++)
    {   

        if(arr[i]>first)
        {
            count++;
            first=arr[i];
        }
        else if(arr[i]==low)
        {
            count++;
        }
        
    }
    printf("%d\n",count);


}