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
    int x,y;
    cin>>x>>y;

    if(y<x)
    {
        int temp=y;
        y=x;
        x=temp;
    }
    cout<<(x-x)+(y-x)<<endl;
}
    
return 0;
}