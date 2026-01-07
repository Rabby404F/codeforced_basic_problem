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
     string s;
     cin>>s;
     int cnt=0;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='(')cnt++;
        else{
            if(cnt>0)cnt--;
        }
     }
     cout<<cnt<<endl;
    }
return 0;
}