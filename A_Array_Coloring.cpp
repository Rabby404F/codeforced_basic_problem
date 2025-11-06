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
     int n;
     cin>>n;
     int cnt=0;
     vector<int>v(n);
     for(auto &x:v)
        {
            cin>>x;
            cnt+=x;
        }
        if(cnt%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


return 0;
}