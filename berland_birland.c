#include<stdio.h>
#include<string.h>
int main()
{
    char ber[150];
    gets(ber);

    char bir[150];
    gets(bir);

    char rev[150];
    int n=strlen(ber);
    int i;

    for( i=0;ber[i]!='\0';i++)
    {
        rev[i]=ber[n-1-i];
    }
    rev[i]='\0';

    

    if(strcmp(bir,rev)==0)
    {
        printf("YES\n");
    }
    else{
        printf("NO");
    }

    return 0;
}