#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s;
    cin>>s;
  char st='a';
  int sum=0;
  map<char,int>m;
   for(int i=0;i<s.length();i++)
   {
       int r=abs(s[i]-st);
       int x='z'-st+s[i];
       cout<<r<<" "<<x<<endl;
       if(r<x){sum=sum+r;}
       else{sum=sum+x;}
       
       st=s[i];
   }
   cout<<sum<<endl;
}