#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int high=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
  
sum=sum-a;
sum=sum+b;
        if(sum>high){high=sum;}
        
        
 

    }
    cout<<high<<endl;

    return 0;
   
}