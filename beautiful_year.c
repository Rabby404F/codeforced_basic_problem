#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);
    
  while(1)
   {
    year++;
    int temp=year;
    int arr[4];
    int i=3;
     while(temp!=0)
    {
      
       arr[i]=temp%10;
       temp=temp/10;
       i--;
    }
      if (arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3] &&
            arr[1] != arr[2] && arr[1] != arr[3] &&
            arr[2] != arr[3])
        {
            printf("%d\n", year);
            break;
        }
}
   

return 0; 

}