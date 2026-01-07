#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
     string s,x;
     cin>>x;
     int cnt=0;
     for(int i=0;i<n;i++)
     {     s=x;
          if(s[i]=='0')s[i]='1';
          else s[i]='0';
          
          for(int j=0;j<s.size();j++)
          {
            if(s[j]=='1') cnt++;
           
          }
           
     }
     cout<<cnt<<endl;
    }
    


return 0;
}