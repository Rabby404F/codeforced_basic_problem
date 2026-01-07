#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n;
     cin>>n;
     map<int,int>m;
     vector<int>v(n),cn;
     for(auto &x:v)cin>>x;
     reverse(v.begin(),v.end());
     for(auto u:v)m[u]++;
     for(auto u:v)
     {   
        if(m[u]==0)continue;
        else if(m[u]>=1)
        {
          cn.push_back(u);
          m[u]=0;
        }
        
     }
     reverse(cn.begin(),cn.end());
     cout<<unique(cn.begin(),cn.end())-cn.begin()<<endl;
     for(auto u:cn)cout<<u<<" ";
     cout<<endl;
return 0;
}