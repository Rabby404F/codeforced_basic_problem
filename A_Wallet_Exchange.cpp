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
     long long a,b;
     cin>>a>>b;
     long long sum=a+b;
     if(sum%2==0)cout<<"Bob"<<endl;
     else cout<<"Alice"<<endl;
  }
return 0;
}