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
  int x;
  cin>>x;
     string s,t;
     cin>>s>>t;
     sort(s.begin(),s.end());
     sort(t.begin(),t.end());
     if(s==t)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
  }
return 0;
}