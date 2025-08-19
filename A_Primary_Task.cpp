#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
  string s;
  cin>>s;

  char a='1';
  char  b='0';
  int count=0;

  if(s.length()<3)count++;
  if(s[0]!=a || s[1]!=b)
    {count++;}
  
    if(s[2]=='0' )count++;
    if(s.length()==3 && s[2]=='1')
    {
        count++;
    }

  
 if(count==0)cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
    }
}