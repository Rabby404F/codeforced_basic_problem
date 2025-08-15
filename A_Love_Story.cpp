#include<iostream>
#include<string>
using namespace std;

int main()
{ int t;
    cin>>t;
    while(t--)
    {
  string root="codeforces";
  string s;
  cin>>s;
  int n=s.length();
  int count=0;

  for(int i=0;i<n;i++)
  {
    if(root[i]!=s[i])count++;
  }
  cout<<count<<endl;
}
return 0;
}