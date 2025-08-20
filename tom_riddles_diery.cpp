#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    map<string,int>m;
    for(int i=1;i<=t;i++)
    {
         string s;
         cin>>s;
         m[s]++;
       if(m[s]>1)cout<<"YES"<<endl;
       else {cout<<"NO"<<endl;}
    }
}