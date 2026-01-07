#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);


    int d=(b*b)-4*a*c;
    printf("d is %d\n",d);
    if(d<0){printf("imaginary root\n");
         int real = -b / (2 * a);
          int imag = sqrt(-d) / (2 * a);
            printf("Complex roots\n");
            printf("Root1 = %.2d + %.2di\n", real, imag);
            printf("Root2 = %.2d- %.2di\n", real, imag);
       }

    else if(d==0)
    {
        int x=-b/(2*a);
        printf("Root is %d\n",x);
    
    }

    else if(d>0)
    {
        int e=(-b+sqrt(d))/(2*a);
        printf("1st root  %d\n",e);

        int f=(-b-sqrt(d))/(2*a);
        printf("2nd root  %d\n",f);
    }

    return 0;
}