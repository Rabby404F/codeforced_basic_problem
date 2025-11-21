#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>
#include<cmath>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n;
     cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
        int a;
        cin>>a;
        v.push_back(abs(a));
     }
     sort(v.begin(),v.end());
     cout<<v[0]<<endl;
return 0;
}