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
     char  ch=s.back();
     
     for(int i=n-2;i>=0;i--)
     {   
        if(s[i]!=ch)cnt++;
     }
     cout<<cnt<<endl;
    }


return 0;
}