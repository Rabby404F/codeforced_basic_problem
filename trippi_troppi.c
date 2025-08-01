#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();

 for(int i=1;i<=n;i++)
  {
    char str[150];
    gets(str);
    char des[110];
    des[0]=str[0];

   int k=1;
  
        for(int j=1;str[j]!='\0';j++)
        {
            if (str[j-1]==' ')
            {
               des[k]=str[j];
               k++;
            }
        
    }
    des[k]='\0';
   
    printf("%s\n",des);
  }

  return 0;
}