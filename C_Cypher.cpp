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
     
     vector<int>result;
     for(int i=0;i<n;i++)
     {
        int r;
        cin>>r;
        string s;
        cin>>s;
        for (char c : s) {
        
            if(c=='D')
            {
             v[i]=(v[i]+1)%10;
            }
            else
            {  
            v[i] = (v[i] - 1 + 10) % 10;
          }
            }
            result.push_back(v[i]);
        }
        for(auto x:result)cout<<x<<" ";
        cout<<endl;
    }
        
     
return 0;
}