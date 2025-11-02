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
     if(a>b)
     {
        int t=a;
        a=b;
        b=t;
     }
     cout<<a/a<<"/"<<b/a<<endl;
return 0;
}