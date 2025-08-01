#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[120];
    printf("Enter your string :");
    gets(ch);

    puts(ch);

    int upper_count=0;
    int lower_count =0;

    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z'){upper_count++;}
        if(ch[i]>='a'&&ch[i]<='z'){lower_count++;}
    }
    printf("Number of upper case latter is  =  %d\n",upper_count);
    printf("Number of lower case latter is = %d\n",lower_count);

  if(upper_count>lower_count)
  {
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {   printf("%c",ch[i]);
            continue;}
       else if(islower(ch[i])>0)
       {putchar(toupper(ch[i]));}
    }
  }

  else if(upper_count<=lower_count)
  {
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
        {   printf("%c",ch[i]);
            continue;}
       else if(isupper(ch[i])>0)
       {putchar(tolower(ch[i]));}
    }
  }

  return 0;
  
}