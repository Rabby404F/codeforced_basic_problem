#include<iostream>
#include<algorithm>
using namespace std;
int main()
{ int t;
  cin >>t;
  while(t--){
  string s,ss;
  cin>>s;
  bool flag=false;
  for(int i=0;i<s.size()-1;i++)
  {
    if(s[i]==s[i+1])
    {
      flag=true;
      break;
    }
  }
  if(flag==true)cout<<"1"<<endl;
  else cout<<s.size()<<endl;
}
}