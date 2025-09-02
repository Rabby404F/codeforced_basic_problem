#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char t=s[0];
    char t2=s[2];
    string temp=t;
    cout<<temp<<endl;
    string tm=t2;
    cout<<tm<<endl;
    int a=stoi(temp);
    
    int b=stoi(tm);
    cout<<a<<" "<<b<<endl;
}