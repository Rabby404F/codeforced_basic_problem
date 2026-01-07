#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n,x;
     cin>>n>>x;
     map<string,string>m;
     for(int i=0;i<x;i++)
     {
        string a,b;
        cin>>a>>b;
        m[a]=b;
        m[b]=a;
     }
     vector<string>v;
     for(int i=0;i<n;i++)
     {
        string str;
        cin>>str;
        v.push_back(str);
     }
     for(auto u:v)
     {
        if(u.length()<=m[u].size())   cout<<u<<" ";
        else cout<<m[u]<<" ";
     }
return 0;
}