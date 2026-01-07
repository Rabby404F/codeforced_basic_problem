#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    vector<pair<int,int>>v(a);
    for(auto &x:v)cin>>x.first>>x.second;
    int cnt=0;
    if(v[0].first-0>=b || c-v[a-1].second>=b)
    {
        cout<<"Yes"<<endl;
    }
    else {
    for(int i=1;i<a;i++)
    {
        if(v[i].first-v[i-1].second >=b)
        {
            cnt=1;
            break;
        }
    }
    if(cnt!=0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
  }
return 0;
}