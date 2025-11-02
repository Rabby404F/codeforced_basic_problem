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
  while(t--)
  {
     vector<pair<int,int>>vp;
     for(int i=0;i<2;i++)
     {
        int a,b;
        cin>>a>>b;
        if(a<b)
        {
            vp.push_back({a,b});
        }
        else{
            vp.push_back({b,a});
        }
     }
     sort(vp.begin(),vp.end());
     
     int cnt=0;
     
        for(int j=vp[0].first;j<=vp[0].second;j++)
        {
            if(j==vp[1].first)cnt++;
        }
        for(int j=vp[1].first;j<=vp[1].second;j++)
        {
            if(j==vp[1].second)cnt++;
        }
     
     
     
     if(cnt==2)
     {
        cout<<"YES"<<endl;
     }
     else cout<<"NO"<<endl;
  }                                    
return 0;
}