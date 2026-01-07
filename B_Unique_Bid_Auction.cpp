#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
     vector<int>v(n),t;
     map<int,int>m;
     for(auto &x:v)
     {
        cin>>x;
        m[x]++;
     }

       t=v;
    sort(t.begin(),t.end());
    int temp=-1;
    for(auto u:t)
    {
        if(m[u]==1)
        {
            temp=u;
            break;
        }
    }
    if(temp==-1)cout<<"-1"<<endl;
    else{
        for(int i=0;i<n;i++)
        {
            if(v[i]==temp)
            {
            cout<<i+1<<endl;
            break;
            }

        }
    }

  }
return 0;
}