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
    char ch;
    string s;
    cin>>ch>>s;
    map<char,char>m;
    string s1,s2,s3;
    s1="qwertyuiop";
    s2="asdfghjkl;";
    s3="zxcvbnm,./";
    if(ch=='L'){
    for(int i=0;i<9;i++)
    {
      m[s1[i]]=s1[i+1];
      m[s2[i]]=s2[i+1];
      m[s3[i]]=s3[i+1];
    }
  }
  else{
    for(int i=1;i<10;i++)
    {
      m[s1[i]]=s1[i-1];
      m[s2[i]]=s2[i-1];
      m[s3[i]]=s3[i-1];
    }
  }
  for(auto u:s)cout<<m[u];

return 0;
}