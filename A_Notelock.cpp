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
     int n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     int cnt=0;
     for(int i=1;i<s.size();i++)
     {
        if(s[i]=='1')
        {
           int r=max(1,i-(k+1));
           for(int j=i;j>=i-r;j--)
           {
            if(s[j]=='1') continue;
            else if(j<i-r)
            {
                cnt++;
            }
           }
        }
     }
     cout<<cnt<<endl;
return 0;
}