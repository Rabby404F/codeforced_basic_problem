#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
     int gg;


    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int hi[4];
        hi[0]=a;
        hi[1]=b;
        hi[2]=c;
        hi[3]=d;

        gg=hi[0];

        int count=0;

        for(int j=0;j<3;j++)
        {
            if(hi[j+1]>hi[0])
            {
                count++;
            }
            else{continue;}
        }

        printf("%d\n",count);
       

        
    }

    return 0;


}