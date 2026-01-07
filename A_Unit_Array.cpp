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
     int cnt=0;
     for(auto &x:v)cin>>x;
     int mcnt=0,pcnt=0;
     for(auto u:v)
     {
        if(u==1)pcnt++;
        else mcnt++;
     }
   
     if(mcnt%2==1)
     {
        mcnt--;
        pcnt++;
        cnt++;
     }
     
        while(mcnt>pcnt)
        {
         mcnt-=2;
         pcnt+=2;
         cnt+=2;
        }
     
     cout<<cnt<<endl;
    }

return 0;
}