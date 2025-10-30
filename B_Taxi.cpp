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
     int n;
     cin>>n;
     vector<int>v(n);
     int sum=0;
     for(auto &x:v)
     {
        cin>>x;
        sum+=x;
     }
     if(sum%4==0)
     {
        cout<<(sum/4)<<endl;
     }
     else{
        cout<<(sum/4)+1<<endl;
     }
return 0;
}