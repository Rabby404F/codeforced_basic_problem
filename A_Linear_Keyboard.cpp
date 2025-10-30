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
  int t;
  cin>>t;
  while(t--){
     string s,s1;
     cin>>s>>s1;
     map<char,int>m;
     int j=1;
     for(int i=0;i<26;i++)
     {
        m[s[i]]=j;
        j++;
     }
    
     int sum=0;
     for(int i=0;i<s1.length()-1;i++)
     {
        int r=abs(m[s1[i]]-m[s1[i+1]]);
   
        sum+=r;
     }
     cout<<sum<<endl;
    }
return 0;
}