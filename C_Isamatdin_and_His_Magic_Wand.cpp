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
     int ecn=0;
     int ocn=0;
     int n;
     cin>>n;
     vector<int >v(n);
     for(auto &x:v)  cin>>x;
     for(int i=0;i<n;i++)
     {
        if(v[i]%2==0)
        {
            ocn++;
        }
        else
        {
            ecn++;
        }
     }
     if(ecn==0 || ocn==0)
     {
        for(auto u:v){cout<<u<<" ";}
        cout<<endl;
     }
     else{
        sort(v.begin(),v.end());
        for(auto u:v){cout<<u<<" ";}
        cout<<endl;
        
     }
    }
return 0;
}