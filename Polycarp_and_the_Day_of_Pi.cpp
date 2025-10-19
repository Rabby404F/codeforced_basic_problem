#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    string temp="314159265358979323846264338327";
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(temp[i]!=s[i])
        {break;}
        cnt++;
    }
    cout<<cnt<<endl;
    }
}