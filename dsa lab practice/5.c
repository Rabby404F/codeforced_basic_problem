#include<stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter your key : ");
    scanf("%d",&key);

    int loc=-1;

    for(int i=0;i<5;i++)
    {
       if(arr[i]==key)
       {
        loc=i;
       }
    }

    printf("LOcation = %d\n",loc);
}