#include<iostream>
#include<map>
using namespace std;
int main()
{   int n;
    cin>>n;
    while(n--){
   map<char,int>m;
   char ch='a';
   int x;
   cin>>x;
   string s;
   cin>>s;
   char temp=s[0];
   
   for(int i=1;i<=26;i++)
   {
    m[ch]=i;
    ch++;
   }
   for(int i=1;i<s.length();i++)
   {
     if(s[i]>=temp)temp=s[i];
   }
   cout<<m[temp]<<endl;
}
}