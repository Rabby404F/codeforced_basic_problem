#include<stdio.h>
 
int main()
{
  int a,b,c,d;
    printf("Enter 1st matrix order : ");
    scanf("%d %d", &a,&b);
    printf("Enter 2nd matrix order : ");
    scanf("%d %d",&c,&d);

    int arr[a][b];
    int arr2[c][d];
    int mul[a][d];

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<d;j++)
        {
            mul[i][j]=0;
        }
    }

    if(b!=c)printf("MULtiplication not possible!\n");
    else{

      printf("Enter 1st matrix element :");
       for(int i=0;i<a;i++)
       {
           for(int j=0;j<b;j++)
           {
            scanf("%d",&arr[i][j]);
           }
       }
        printf("Enter 2nd matrix element :");
       for(int i=0;i<c;i++)
       {
           for(int j=0;j<d;j++)
           {
            scanf("%d",&arr2[i][j]);
           }
       }

       //matrix mul
       for(int i=0;i<a;i++)
       {
          for(int j=0;j<d;j++)
          {
            for(int k=0;k<b;k++)
            {
                mul[i][j]+=arr[i][k]*arr2[k][j];
            }
          }
       }
       printf("output : \n");
       for(int i=0;i<a;i++)
       {
        for(int j=0;j<d;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
       }
    

    }
}