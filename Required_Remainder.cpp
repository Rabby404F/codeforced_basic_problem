#include<iostream>
#include<cmath>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
    long long x,y,n;
    cin>>x>>y>>n;

    for(int i=n;i>=0;i--)
    {
      long long k=n;
      if((k%x)==y)
      {
        cout<<k<<endl;
        break;
      }
      else{continue;}
    }
}
}