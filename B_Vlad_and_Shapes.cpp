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

     vector<string>v(n);
     bool flag =true;

     for(auto &x:v)cin>>x;
     for(int i=0;i<v.size();i++)
     {   int cnt=0;
        for(char u:v[i])
        {
            if(u=='1')cnt++;
        }
        if(cnt==1)
        {
            flag=false;
            break;
        }
     }
     if(flag==false)cout<<"TRIANGLE"<<endl;
     else cout<<"SQUARE"<<endl;
    }
return 0;
}