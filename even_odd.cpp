#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long d;
    cin>>d;
    long long r=n/2;
    if(n%2!=0)
    {
     r=ceil(n/2.0);
    }
 
    if(d<=r)
    {
        cout<<d*2-1<<endl;
    }
   else if(d>r)
    {
     d=d-r;
        cout<<d*2<<endl;
      
        
    }
    
   
}