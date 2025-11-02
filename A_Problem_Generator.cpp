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
  int n,m;
  cin>>n>>m;
     string s;
     cin>>s;
     map<char,int>mp;
     for(char i='A';i<'H';i++)
     {
        mp[i]=0;
     }

     
    for(char u:s)mp[u]++;

    int cnt=0;
    for(int j=1;j<=m;j++){

            for(char i='A';i<'H';i++)
            {
            
                if(mp[i]==0)cnt++;
                else mp[i]--;
            }
    }
    
    cout<<cnt<<endl;
}
return 0;
}