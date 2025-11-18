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
     string s;
     cin>>s;
     sort(s.begin(),s.end());
     int n=unique(s.begin(),s.end())-s.begin();
     if(n>=3)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
  }
return 0;
}