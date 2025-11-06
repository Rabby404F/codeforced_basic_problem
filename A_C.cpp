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
     long long a,b,c;
     cin>>a>>b>>c;
     if(a>b)
     {
        int temp=a;
        a=b;
        b=temp;
     }

    long long cnt=0;
    long long i=1;
    while(1){
        
        if(i%2 != 0)
        {
            a+=b;
            cnt++;
            i++;
        }
        else{
            b+=a;
            cnt++;
            i++;
        }
        if(a>c || b>c)break;
    }
    cout<<cnt<<endl;
}

return 0;
}