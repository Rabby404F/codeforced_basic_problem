
#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &x:v)cin>>x;

        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])cnt++;
        }
        cout<<cnt<<endl;
     }
return 0;
}