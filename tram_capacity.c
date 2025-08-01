#include<stdio.h>
int main()
{
    int n;
    printf("Enter stop number :");
    scanf("%d",&n);

    
    int a[n],b[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }

     int capacity=b[0]-a[0];


  for(int i=0;i<n;i++)
  {
        int d= b[i]-a[i];
        int e=d-a[i+1];
        int f=e+b[i+1]

  }

}