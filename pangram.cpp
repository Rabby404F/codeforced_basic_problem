#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{ int n;
    
    string source="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        s[i]=toupper(s[i]);
    }

    sort(s.begin(),s.end());
    auto it = unique(s.begin(), s.end());
    s.erase(it, s.end());
    
   int flat=0;
   for(int i=0;i<26;i++)
   {
    if(source[i]!=s[i])
    {
        flat++;
        break;
    }
   }
   if(flat==0)cout<<"YES"<<endl;
   else{cout<<"NO"<<endl;}
}