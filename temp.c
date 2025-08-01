#include<stdio.h>
int main()
{
    int num[4];

    for(int i=0;i<4;i++)
    {
        scanf("%d",&num[i]);
    }

    int count=1;

    if(num[1]!=num[0]){count++;}
    if(num[2]!=num[0]&&num[2]!=num[1]){count++;}
    if(num[3]!=num[0]&&num[3]!=num[1]&&num[3]!=num[2]){count++;}
   

    
    int need=0;
    while(1)
    {    count++;
        need++;
        if(count==4){break;}
    }
    printf("%d\n",need);
    return 0;
    

}