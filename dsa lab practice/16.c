#include<stdio.h>
int main()
{
    int arr[10];
    arr[1]=2;
    arr[2]=4;
    arr[3]=6;
    int front=1,rear=3;
    printf("Initial q : ");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");


    //for insertion
    while(1)
    {
        printf("1/0 :");
        int n;
        scanf("%d",&n);
        if(n==0 || rear==9)break;
        else {
            int x;
            scanf("%d",&x);
            rear++;
            arr[rear]=x;
        }
    }
    printf("NOw :");
     for(int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);

    }

    //delation
    while(1){
        printf("Yes/no :");
        int r;
        scanf("%d",&r);
        if(r==0 || rear==front-1)break;
        else {
            front++;
        }
        for(int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);
    }
    }
}