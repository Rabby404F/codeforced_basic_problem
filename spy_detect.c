#include<stdio.h>
int main()
{  int t;
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {



    int n;
 
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int spy=0;

    int i=0;
    while(1)
    {    
        if(arr[i]!=arr[i+1] && i==0&& arr[i+1]==arr[i+2])
        {
            spy=arr[i];
            break;
        }
        else if(arr[i]!=arr[i+1]&&arr[i+1]!=arr[i+2]  || arr[i]!=arr[i+1])
        {spy=arr[i+1];
        break;}
        i++;
    }
    

    int r=0;
    int possiton;

    while(1)
    {
        if(arr[r]==spy)
        {  
            possiton=r+1;
            break;
            
        }
        r++;
    }
    printf("%d\n",possiton);
}

    return 0;
    
}