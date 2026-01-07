#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n;
     cin>>n;
     vector<string>s(n);
     for(auto &x:s)cin>>x;
     int cnt=0;
     for(int i=0;i<n;i++)
     {     
        
    

        for(int j=0;j<s[i].length();j++)
        {
             if(s[i][j]=='O' && s[i][j+1]=='O')
             {
                s[i][j]='+';
                s[i][j+1]='+';
                cnt++;
                break;
             } 

        }
        if(cnt==1)break;
     }
     if(cnt!=0)
     {  
         cout<<"YES"<<endl;
        for(auto u:s)cout<<u<<endl;
     }
     else cout<<"NO"<<endl;
return 0;
}