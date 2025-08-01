#include<iostream>
#include<string>
using namespace std;
int main()
{   string  s;
    int r;
    cin>>r;
    while(r--)
    {

   
    cin>>s;

    int n=s.size();
    string temp=s.substr(0,n/2);
  
    temp=temp+temp;
    if(temp==s)cout<<"YES"<<endl;
    else {cout<<"NO"<<endl;}
    }
    
}