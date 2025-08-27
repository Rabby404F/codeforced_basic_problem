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
    if(s.length()==1)cout<<"0"<<endl;
    else{
    int i=0;
    while(1)
    {
        if(s[i]=='1')break;
        else 
        {
            s[i]='2';
        }
        i++;

    }
    int r=s.size();
    while(1)
    {
        if(s[r]=='1')break;
        else{s[r]='2';}
        r--;
        
    }
    int cnt=0;
    for(int x=0;x<s.length();x++)
    {
        if(s[x]=='0')cnt++;
    }
    cout<<cnt<<endl;
}
}
return 0;
}