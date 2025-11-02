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
  int a=1;
   for(int i='a';i<='z';i++)
   {
    m[i]=a;
    a++;
   }
   sum+=min(abs(m['a']-m[s[0]]),(26-abs(m['a']-m[s[0]])));
   for(int i=1;i<s.size();i++)
   {
    sum+=min(abs(m[s[i-1]]-m[s[i]]),(26-abs(m[s[i-1]]-m[s[i]])));
   }
    cout<<sum<<endl;
   
}