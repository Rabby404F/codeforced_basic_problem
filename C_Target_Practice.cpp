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
     vector<vector<int>>v;
     v.push_back({1,1,1,1,1,1,1,1,1,1});
     v.push_back({1,2,2,2,2,2,2,2,2,1});
     v.push_back({1,2,3,3,3,3,3,3,2,1});
     v.push_back({1,2,3,4,4,4,4,3,2,1});
     v.push_back({1,2,3,4,5,5,4,3,2,1});
     v.push_back({1,2,3,4,5,5,4,3,2,1});
     v.push_back({1,2,3,4,4,4,4,3,2,1});
     v.push_back({1,2,3,3,3,3,3,3,2,1});
     v.push_back({1,2,2,2,2,2,2,2,2,1});
     v.push_back({1,1,1,1,1,1,1,1,1,1});
     vector<string>s(10);
     for(auto &x:s)cin>>x;

     int pt=0;

     for(int i=0;i<10;i++)
     {
        for(int j=0;j<10;j++)
        {
            if(s[i][j]=='X')
            {
              pt+=v[i][j];
            }
        }
     }
     cout<<pt<<endl;
  }
     

return 0;
}