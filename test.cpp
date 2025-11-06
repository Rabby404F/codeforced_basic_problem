#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  if(a<b)
  {
    int t=a;
    a=b;
    b=t;
  }
  
  if(abs(a-b)==1 || abs((a%10)-b)==1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}