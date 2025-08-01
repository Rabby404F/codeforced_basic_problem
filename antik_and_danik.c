#include<stdio.h>
int main()
{
    long int n;
    printf("Enter game number :");
    scanf("%ld",&n);
    printf("The number is = %ld\n",n);

    char str[n];
    printf("Enter your string :");
    scanf("%s",str);

    int a_count=0;
    int d_count=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A'){a_count++;}
        else if(str[i]=='D'){d_count++;}
    }
    printf("A count is =  %d\n",a_count);
    printf("D count is = %d\n",d_count);

    if(a_count>d_count)
    {printf("Anton\n");}
    else if(d_count>a_count)
    {printf("Danik\n");}
    else if(a_count== d_count)
    {printf("Friendship\n");}
}
