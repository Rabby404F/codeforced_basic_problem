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
  while(t--)
  {
     vector<int>v(4);
     for(auto &x:v)
     {
        cin>>x;
     }
     if(v[0]==v[1] && v[1]==v[2] && v[2]==v[3])
     {
        cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;
    }

return 0;
}