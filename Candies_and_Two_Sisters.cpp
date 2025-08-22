#include<iostream>
#include<map>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int count=0;
  if(n==1||n==2)
  {
    cout<<"0"<<endl;
  }
  else
  {
    count=(n-1)/2;
     
     cout<<count<<endl;
  }
}
    
}