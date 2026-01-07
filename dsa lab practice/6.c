#include<stdio.h>
int bi_sa(int arr[],int n,int key )
{  
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
    }
    return -1;

}
int main()
{
    int arr[6];

    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter your key :");
    scanf("%d",&key);
   int x= bi_sa(arr,6,key);
   printf("location is %d\n",x);


}