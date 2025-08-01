#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char nam[6]="Timru";
   

    for(int i=0;i<n;i++)
    {
        int s;
        scanf("%d",&s);
        char name[s];
        scanf("%s",name);

        int size=s;

        for(int j=0;j<size;j++)
        {
            for(int k=j+1;k<size;k++)
            {
            if(name[j]>name[k])
            {
                char temp=name[j];
                name[j]=name[k];
                name[k]=temp;
            }
           }
        }
         

         

         if(strcmp(name,nam)==0)
         {
            printf("YES\n");
         }
         else{printf("NO\n");}
    }

    return 0;
}