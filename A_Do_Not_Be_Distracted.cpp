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
     int flag=0;
     for(int i=0;i<s.size();i++)
     {
        for(int j=0;j<i;j++)
        {
            if(s[j]==s[i] && s[j+1]!=s[i])
            {
                flag++;
                break;
            }
        }
     }
     if(flag!=0)cout<<"NO"<<endl;
     else cout<<"YES"<<endl;
    }

return 0;
}