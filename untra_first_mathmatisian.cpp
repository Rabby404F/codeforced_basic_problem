#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s,s1;
   cin>>s>>s1;
   for(int i=0;i<s.length();i++)
   {
    if(s[i]=='0' && s1[i]=='0')cout<<"0";
    else if(s[i]=='1'&& s1[i]=='1')cout<<"0";
    else{cout<<"1";}
   }
   cout<<endl;
}