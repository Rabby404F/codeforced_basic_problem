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
     int n;
     cin>>n;
     vector<int>v(n);
     for(auto &x:v)cin>>x;
    
     

     map<int,int>ma;
     for(auto u:v)ma[u]++;
     int cnt=0;
     for(auto u:v)if(ma[u]>=2)cnt++;
     if(cnt!=0)cout<<0<<endl;
     else{
        sort(v.begin(),v.end());
        int min=abs(v[1]-v[0]);
        for(int i=2;i<v.size();i++)
        {
            int r=abs(v[i]-v[i-1]);
            if(r<min) min=r;
        }
        cout<<min<<endl;
     }
    }

return 0;
}