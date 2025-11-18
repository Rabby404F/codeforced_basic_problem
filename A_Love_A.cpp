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
     string s;
      cin>>s;

      int cnt=0;

      for(char u:s)
      {
        if(u=='a') cnt++;
      }

      if(cnt>s.length()/2) cout<<s.length()<<endl;
      else cout<<cnt*2-1<<endl;

return 0;
}