#include<stdio.h>

int main()
{
  int n;
  scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
    int r;
    scanf("%d",&r);

    if(r>=1900){printf("Division 1\n");}
    else if(r>=1600 && r<=1899){printf("Division 2\n");}
    else if(r>=1400 && r<=1599){printf("Division 3\n");}
    else if(r<=1399){printf("Division 4\n");}
  }

return 0;
}
