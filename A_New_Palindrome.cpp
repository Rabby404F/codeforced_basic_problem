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
  map<char,int>m;
  for(char u:s)m[u]++;
  int cnt=0;
  for(char i='a';i<='z';i++)
  {
     if(m[i]%2!=0)cnt++;
    
  }
  if(cnt-1>1)cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
}
}