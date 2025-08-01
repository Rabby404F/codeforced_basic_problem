#include<stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    int how_much;
    scanf("%d",&how_much);


    for(int i=0;i<how_much;i++)
    {
        int d=num%10;
       
        if(d!=0)
        {
            num=num-1;
        }
        else if(d==0)
        {
            num=num/10;
        }
        
    }
    printf("%d\n",num);

    return 0;
        
}