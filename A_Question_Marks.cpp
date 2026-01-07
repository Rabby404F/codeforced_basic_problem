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
     string s;
     cin>>s;
     map<char,int>mp;
     for(char u:s)
     {
        mp[u]++;
     }
     int cnt=0;

     if(mp['A']>=n)cnt+=n;
     else cnt+=mp['A'];

     if(mp['B']>=n)cnt+=n;
     else cnt+=mp['B'];

     if(mp['C']>=n)cnt+=n;
     else cnt+=mp['C'];

     if(mp['D']>=n)cnt+=n;
     else cnt+=mp['D'];

     cout<<cnt<<endl;
    }
return 0;
}