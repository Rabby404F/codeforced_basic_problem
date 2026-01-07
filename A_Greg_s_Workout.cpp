#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n;
     cin>>n;
     vector<int>v(n);
     for(auto &x:v)cin>>x;
     int c=0,bi=0,ba=0;
     for(int i=0;i<n;i++)
     {
        if(i%3==0)c+=v[i];
        else if(i%3==1)bi+=v[i];
        else ba+=v[i];
     }
     if(c>bi && c>ba)cout<<"chest"<<endl;
     else if(bi>c && bi>ba)cout<<"biceps"<<endl;
     else cout<<"back"<<endl;
return 0;
}