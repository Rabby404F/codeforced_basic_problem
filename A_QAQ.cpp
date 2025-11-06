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
      string s;
      cin>>s;
      int cnt=0;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]=='Q')
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]=='A')
                {
                    for(int k=j+1;k<s.size();k++)
                    {
                        if(s[k]=='Q')
                        {
                            cnt++;
                        }
                    }
                }
            }
        }
      }
      cout<<cnt<<endl;
return 0;
}