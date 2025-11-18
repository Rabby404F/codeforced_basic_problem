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
     deque<char>dq(n);
     for(auto &x:dq)cin>>x;
     while(dq.front()!=dq.back() && !dq.empty())
     {
        dq.pop_front();
        dq.pop_back();
     }
     cout<<dq.size()<<endl;
    }

     
return 0;
}