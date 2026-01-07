#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n;
     cin>>n;
     vector<int>v(n);
     for(auto &x:v)cin>>x;
     map<int,int>mp;
     for(auto u:v)mp[u]++;
     int cnt=mp[v[0]];
     for(int i=1;i<n;i++)
     {
        if(mp[v[i]]>cnt)cnt=mp[v[i]];
     }
     cout<<cnt<<endl;
return 0;
}