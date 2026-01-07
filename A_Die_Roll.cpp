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
     int a,b;
     cin>>a>>b;
    int t=max(a,b);
    
    t=6-t+1;
     if(t==6)cout<<1<<"/"<<1<<endl;

     else if(t%3==0 )
    {
      cout<<t/3<<"/"<<2<<endl;
    }
    else if(t%2==0 )
    {
      cout<<t/2<<"/"<<3<<endl;
    }
    else
    {
      cout<<t<<"/"<<6<<endl;
    }
return 0;
}