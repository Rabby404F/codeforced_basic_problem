#include<stdio.h>
#include<string.h>
int  main()
{
    char s[100],result[100];
    gets(s);

    int pos= 3;
    int j=0;
    for(int i=0;i<pos;i++)
    {
        result[j]=s[i];
        j++;
    }
    for(int i=pos+2; s[i]!='\0';i++)
    {
        result[j]=s[i];
        j++;
    }
    result[j]='\0';

    printf("Result %s",result);


}