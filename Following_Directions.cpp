#include<iostream>
#include<utility>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    pair<int,int> temp;
    temp.first=1;
    temp.second=1;
     
    int r;
    cin>>r;
    string s;
    cin>>s;
    
    pair<int,int>p;
    p.first=0;
    p.second=0;
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R')
        {
            p.first++;
            if(temp==p)
            {cnt++;
                break;}

        }
        else if(s[i]=='L')
        {
            p.first--;
            if(temp==p)
            {cnt++;
               break;}
        }
       
        else if(s[i]=='U')
        {
            p.second++;
            if(temp==p)
            {cnt++;
                break;}

        }
        else if(s[i]=='D')
        {
            p.second--;
            if(temp==p)
            {cnt++;
                break;}

        }
    }
    if(cnt==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}
