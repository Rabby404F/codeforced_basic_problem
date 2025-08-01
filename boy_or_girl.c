#include<stdio.h>
#include<string.h>
int main()
{
    char ch[150];
    gets(ch);

    int count = 0;
    int n;
    n=strlen(ch);
    printf("String length is = %d\n",n);

   for(int i=0;ch[i]!='\0';i++)
   {
     for(int j=i+1;j<n;j++)
     {
      if(ch[i]==ch[j])
      {
        ch[j]=',';
      }
     }
   }
   printf("String is = %s\n",ch);

   for(int i=0;ch[i]!='\0';i++)
   {
    if(ch[i]==','){continue;}
    else{count++;}
   }
   printf("Number of distring character is = %d\n",count);


   if(count%2==0)
   {
    printf("CHAT WITH HER!\n");
   }
   else{printf("IGNORE HIM!\n");}

   return 0;
}