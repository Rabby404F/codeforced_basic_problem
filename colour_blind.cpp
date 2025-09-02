#include<iostream>
#include<string>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int i;
    for( i=0;i<x;i++)
    {
        if(s1[i] =='G' || s1[i]=='B')
        {    
            if(s2[i]=='G' || s2[i]=='B')
            {
               continue;
            }
            else break;
        }
        else if(s1[i]=='R')
        {
            if(s2[i]=='R')continue;
            else break;
        }
    }
   
    if(i==x)cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}
}
}