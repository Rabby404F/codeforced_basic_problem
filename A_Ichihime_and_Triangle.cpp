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
  int n;
  cin>>n;
  while(n--){
     vector<int>v(4);
     for(auto &x:v)cin>>x;
     sort(v.begin(),v.end());
     cout<<v[0]<<" "<<v[0]<<" "<<v[0]<<endl;
  }
return 0;
}