#include<stdio.h>
int main()
{
    int n,h;
    printf("Enter your number of friends :");
    scanf("%d",&n);
    printf("Enter wall height :");
    scanf("%d",&h);

    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int w=0;
    for(int i=0;i<n;i++)
    {
        if(h<a[i])
        {
            w+=2;
        }
        else if(h>=a[i])
        {
            w+=1;
        }
}


printf("%d\n",w);
}