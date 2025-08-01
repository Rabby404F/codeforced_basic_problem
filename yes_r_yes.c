#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);

    char str[4]="YES";
   

    for(int i=0;i<n;i++)
    {
        char str2[4];
        scanf("%s",str2);
        for(int j=0;j<3;j++)
        {
            if(islower(str2[j])>0)
            {
              str2[j]=toupper(str2[j]);
            }
            else{continue;}
        }
        

        if(strcmp(str2,str)==0)
        {
            printf("YES\n");
        }
        else{printf("NO\n");}

    }
    return 0;
}