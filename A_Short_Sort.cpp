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
  int l;
  cin>>l;
  while(l--){
     string s;
     cin>>s;
     if(s[0]!='a'  && s[1]!='b'  && s[2]!='c')
     {
        cout<<"NO"<<endl;
     }
     else cout<<"YES"<<endl;
    }

return 0;
}