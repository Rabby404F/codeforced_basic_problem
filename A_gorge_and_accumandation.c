#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;


    for(int i=0;i<n;i++)
    {
        int p,q;
        scanf("%d%d",&p,&q);
       
       if((q-p)>=2)
       {
        count++;
       }
       else{continue;}

    }
    printf("%d\n",count);
    return 0;
}