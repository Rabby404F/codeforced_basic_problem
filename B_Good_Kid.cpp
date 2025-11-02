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
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
     vector<int>v(n);
     for(auto &x:v)cin>>x;
     sort(v.begin(),v.end());
     v[0]+=1;
     int mul=1;
     for(auto u:v)mul*=u;
     cout<<mul<<endl;
  }
return 0;
}