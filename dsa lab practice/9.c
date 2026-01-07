#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100];
    int n;
    gets(arr);

    n=strlen(arr);
    int pos=-1;

    char f[]="hi";
    int m=strlen(f);

    for(int i=0;i<n-m;i++)
    {
        int j;
        for(j=0;j<m;j++)
        {
            if(arr[i+j]!=f[j])
            {
                break;
            }
        }
        if(j==m)
        {
            pos=i;
            break;
        }

    }
    printf("poss %d",pos);
}