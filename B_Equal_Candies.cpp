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
     int cnt=0;
     for(int i=1;i<n;i++)
     {
        cnt+=(v[i]-v[0]);
     }
     cout<<cnt<<endl;
    }

return 0;
}