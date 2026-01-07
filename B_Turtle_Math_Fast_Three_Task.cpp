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
     vector<int>v(n);
     int sum=0;
     int tflag=0;
     int oflag=0;
     for(auto &x:v)
     {
       cin>>x;
       sum+=x;
       if(x%3==1)oflag++;
       if(x%3==2)tflag++;
     }
     if(sum%3==0)cout<<0<<endl;
     
     else {
        if(sum%3==1)
        {
            if(oflag!=0)cout<<1<<endl;
            else cout<<2<<endl;
        }
        else if(sum%3==2)cout<<1<<endl;
     }
    }
     
return 0;
}