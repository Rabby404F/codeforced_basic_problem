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
     int n,m;
     cin>>n>>m;
     vector<int>v(m);
     for(auto &x:v)
     {
        cin>>x;
     }
     int min=0;
     int max=0;
    sort(v.begin(),v.begin()+n);
    cout<<v[n-1]-v[0]<<endl;
return 0;
}