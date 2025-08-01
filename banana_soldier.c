#include<stdio.h>
int main()
{
    int k,n,w;
    printf("1st banana price :");
    scanf("%d",&k);

    printf("How much doller he has :");
    scanf("%d",&n);

    printf("How much banana he want :");
    scanf("%d",&w);

   int price=0;

    for(int i=1;i<=w;i++)
    {
      price+=(i*k);
      printf("price=%d\n",price);
    }
    printf("Banana price = %d\n",price);
  
    int need;
    if(price>n)
    {
      need=(price-n);
      printf("He need money = %d\n",need);
    }
    else{printf("0");}


    return 0;

}