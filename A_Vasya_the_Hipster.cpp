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
  int design=0;
  int nondesign=0;
    int x,y;
    cin>>x>>y;
    if(x<y)
    {
        design=x;
        nondesign=(y-x)/2;
    }
    else{
        design=y;
        nondesign=(x-y)/2;
        
    }
    cout<<design<<" "<<nondesign<<endl;

return 0;
}
