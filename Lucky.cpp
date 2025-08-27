#include<iostream>
#include<string>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int sum1=0;
    for(int i=0;i<3;i++)
    {   string t;
        
         char ch=s[i];
         t=t+ch;
        int r=stoi(t);
        sum1+=r;
        
    }
    int sum2=0;
    for(int i=3;i<6;i++)
    {
        string t;
        
         char ch=s[i];
         t=t+ch;
        int r=stoi(t);
        sum2+=r;
    }
  if(sum1==sum2)cout<<"YES"<<endl;
  else {cout<<"NO"<<endl;}
}
}