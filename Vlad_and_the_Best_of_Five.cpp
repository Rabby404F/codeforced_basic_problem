#include<iostream>
#include<string>
using namespace std;

int main()
{  int n;
    cin>>n;
    while(n--)
    {
    string s;
    cin>>s;
    int a_cnt=0;
    int b_cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')a_cnt++;
        else b_cnt++;
    }
    if(a_cnt>b_cnt)cout<<"A"<<endl;
    else{
        cout<<"B"<<endl;
    }
}
}