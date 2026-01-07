#include<stdio.h>
int main()
{
   int arr[5];

   for(int i=0;i<5;i++)
   {
     scanf("%d",&arr[i]);
   }
   int high=arr[0];
   int tnd=-1;
   for(int i=1;i<5;i++)
   {
    if(high<arr[i])
    {
        tnd=high;
        high=arr[i];
        
    }
     else if (arr[i] > tnd && arr[i] != high) {
            tnd = arr[i];
     }
   }
   printf("2nd high %d\n",tnd);
}