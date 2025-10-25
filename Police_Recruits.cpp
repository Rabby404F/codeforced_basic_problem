#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    
    int cnt=0;
    int tcnt=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]>0){ tcnt+=arr[i];
       }
        else if(arr[i]<0 )
     {    if(tcnt==0)
        {
          cnt+=abs(arr[i]);  
        
        } 
        else{ 
         tcnt-=abs(arr[i]);}
                            }
    
    }
    cout<<cnt<<endl;
}