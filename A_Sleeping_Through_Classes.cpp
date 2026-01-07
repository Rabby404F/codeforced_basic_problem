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
     int flag=0;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='0' && flag==0)cnt++;
        else if(s[i]=='0'  && flag!=0) flag--;
        else if(s[i]=='1')flag=n;
     }
     cout<<cnt<<endl;
    }


return 0;
}