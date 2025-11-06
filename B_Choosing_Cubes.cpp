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
     int n,f,k;
     cin>>n>>f>>k;
     vector<int>v(n);
     for(auto &x:v)cin>>x;
     int fev=v[f-1];
     int flag=0;
     sort(v.begin(),v.end(),greater<int>());
     for(int i=0;i<k;i++)
     {
        if(v[i]==fev)
        {
            flag++;
            break;
        }
     }
     
     v.erase(v.begin(),v.begin()+k);
     
     int flag2=0;
     for(int i=0;i<v.size();i++)
     {
        if(v[i]==fev)
        {flag2++;
            break;
        }
     }
     
     if(flag==1 && flag2==1)cout<<"MAYBE"<<endl;
     else if(flag==0 && flag2==1)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
    }
}