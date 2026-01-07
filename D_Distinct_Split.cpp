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
     string temp=s;
     sort(temp.begin(),temp.end());
     int r=unique(temp.begin(),temp.end())-temp.begin();
     if(r==1)cout<<2<<endl;
     else{
     map<char,int>m;
     int cnt=0;
     for(char u:s)m[u]++;
     for(int i='a';i<='z';i++)
     {
        if(m[i]==1)cnt++;
        else if(m[i]>1)cnt+=2;
     }
     for(int i=2;i<s.length()-1;i++)
     {
        if(s[i]==s[i+1])cnt--;
     }
     cout<<cnt<<endl;
    }
}
return 0;
}