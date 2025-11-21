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
     vector<string>v(n);
     set<string>s;
     for(auto &x:v)
     {
        cin>>x;
        s.insert(x);
     }
     if(s.size()==1)
     {
        cout<<*s.begin()<<endl;
    
     }
     else
     {
       int p= count(v.begin(),v.end(),*s.begin());
       int w= count(v.begin(),v.end(),*s.rbegin());

      if(p>w)cout<<*s.begin()<<endl;
      else cout<<*s.rbegin()<<endl;
     }
    
return 0;
}