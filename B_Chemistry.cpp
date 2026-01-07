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
     int m,n;
     cin>>m>>n;
     string s;
     cin>>s;
     int cnt=0;
     map<char,int>mp;
     for(char u:s)mp[u]++;
     for(int i='a';i<='z';i++)
     {
      if(mp[i]%2==1)cnt++;
     }
     if(cnt>n+1)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;

  }
return 0;
}