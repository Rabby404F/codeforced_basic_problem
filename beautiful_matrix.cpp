#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{  int t;
  cin>>t;
  while(t--)
  {
    int x;
    cin>>x;
  string s;
  cin>>s;
  int count=0;
  int n= s.length();
  double r=sqrt(n);

  for(auto u:s) if(u=='0')count++;

  if(count==(r-2)*(r-2))cout<<"Yes"<<endl;
  else {cout<<"No"<<endl;}
  }
}