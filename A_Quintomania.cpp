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
     int cnt=0;
     for(auto &x:v)
    { 
        cin>>x;
    }
    for(int i=0;i<v.size()-1;i++)
    {
        if(abs(v[i]-v[i+1])==5 || abs(v[i]-v[i+1])==7)
        {
            continue;
        }
        else{
            cnt++;
            break;
        }
    }
    if(cnt==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

return 0;
}