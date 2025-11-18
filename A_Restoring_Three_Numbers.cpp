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
     vector<int>v(4);
     for(auto &x:v)cin>>x;
     sort(v.begin(),v.end());
     int d=v[3]-v[0];
     int e=v[3]-v[1];
     int f =v[3]-v[2];
     cout<<d<<" "<<e<<" "<<f<<endl;

return 0;
}