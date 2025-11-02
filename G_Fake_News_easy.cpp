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
     string root="heidi";
     string s;
     cin>>s;
     int cnt=0;
     vector<char>v;
     for(int i=0;i<root.size();i++)
     {  static int r=0;
        for(int j=r;j<s.size();j++)
        {
            if(root[i]==s[j])
            {
                cnt++;
                r=j;
                break;
                
            }
        }
        
     }
     
     if(cnt==root.size())cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
return 0;
}