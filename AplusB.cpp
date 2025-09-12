#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    string t=s;
    reverse(t.begin(),t.end());
    int x=stoi(s);
    int y=stoi(t);
    cout<<x+y<<endl;
    }
}