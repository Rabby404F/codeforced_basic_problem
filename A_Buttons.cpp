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
     vector<long long>v(3);
     long long sum=0;
     for(auto &x:v)
     {
        cin>>x;
        sum+=x;
     }
     if(sum%2!=0)cout<<"First"<<endl;
     else cout<<"Second"<<endl;
    }

return 0;
}