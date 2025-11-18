#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>
#include<cmath>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n,m;
     cin>>n>>m;
     vector<int>v(n);
     for(auto &x:v)cin>>x;
     sort(v.begin(),v.end());
     int cnt=0;
     int sum=0;
     for(int i=0;i<v.size();i++)
     {
       if(cnt==m)break;
       else if(v[i]<0)
       {
        sum+=abs(v[i]);
        cnt++;
        
       }
     }
     cout<<sum<<endl;

return 0;
}