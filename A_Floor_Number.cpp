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
     int n,x;
     cin>>n>>x;
     if(n-2<=0)cout<<"1"<<endl;
     else{
        n-=2;
        int cnt=1;
        while(n>0)
        {
            cnt++;
            n-=x;
        }
        cout<<cnt<<endl;
     }
    }

return 0;
}