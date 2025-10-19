#include<iostream>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--){
  int a,b;
  cin>>a>>b;
  string s;
  cin>>s;
  int cnt=0;
  for(int i=0;i<s.length();i++)
  {
     if(s[i]=='B')
     {  
        cnt++;
        i+=b-1;
        
        
     }
     
  }
  cout<<cnt<<endl;
}
}