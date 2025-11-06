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
     string s;
     cin>>s;
     map<char,int>m;
     char ch='A';
     for(int i=1;i<=26;i++)
     {
        m[ch]=i;
        ch++;
     }
    vector<int>v(27,0);
    for(int i=0;i<s.size();i++)
    {
        v[m[s[i]]]++;
    }

    int cnt=0;
    for(int i=1;i<27;i++)
    {
        if(v[i]>=i)cnt++;
    }
    cout<<cnt<<endl;
}

return 0;
}