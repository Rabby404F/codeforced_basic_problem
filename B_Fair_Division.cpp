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
     vector<int>v1;
     for(auto &x:v)cin>>x;
      v1=v;
     sort(v.begin(),v.end());
     int f=unique(v.begin(), v.end())-v.begin();
     if(f==1)
     {
        int ocnt=0;
        int tcnt=0;
        for(auto u:v)
        {
            if(u==1)ocnt++;
            else tcnt++;
        }
        if(ocnt%2==0 && tcnt%2==0)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
     }
     else {
       
        int sum=0;
        for(auto u:v1)sum+=u;
        if(sum%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
    
    }
return 0;
}