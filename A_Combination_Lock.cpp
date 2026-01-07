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
     int n;
     cin>>n;
     string s,e;
     cin>>s>>e;
     
     int cnt=0;
     for(int i=0;i<n;i++)
     {
        int x=s[i]-'0';
        int y=e[i]-'0';
        if(x<y)
        {
            int t=x;
            x=y;
            y=t;
        }
        int m=x-y;
        
         int q=0;
         while(x!=y)
         {
            q++;
            x=(x+1)%10;
         }
         cnt+=min(m,q);
     }
     cout<<cnt<<endl;
    
return 0;
}