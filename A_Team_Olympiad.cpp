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
     map<int,int>m;
     int n;
     cin>>n;
     vector<int>v(n);
     for(auto &x:v)cin>>x;
     for(int i=0;i<n;i++)
     {
        m[v[i]]++;
     }
     int x=min(min(m[1],m[2]),m[3]);
     cout<<x<<endl;
     if(x>0)
     {
       stack<int>s1,s2,s3;
       for(int i=0;i<n;i++)
       {
        if(v[i]==1)s1.push(i+1);
        else if(v[i]==2)s2.push(i+1);
        else s3.push(i+1);
       }
       for(int i=0;i<x;i++)
       {
        cout<<s1.top()<<" "<<s2.top()<<" "<<s3.top()<<endl;
        s1.pop();
        s2.pop();
        s3.pop();
       }
     }

return 0;
}