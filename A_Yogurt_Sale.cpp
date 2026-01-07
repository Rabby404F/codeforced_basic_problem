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
     int a,b,c;
     cin>>a>>b>>c;
     int sum=0;
     while(a>=1)
     {
        if(a==1)
        {
            sum+=b;
            a--;
        }
        else{
            sum+=min(b*2,c);
            a-=2;
        }
     }
     cout<<sum<<endl;
    }

return 0;
}