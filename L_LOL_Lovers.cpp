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
     string s;
     cin>>s;
     int flag=-1;
     while(1)
     {
        if(s[0]=='L')
        {
           int r=count(s.begin()+1,s.end(),'L');
          
           if(r!=1)
           {
            flag=1;
            break;
           }
           else break;
        }
        if(s[0]=='O')
        {
           int r=count(s.begin()+1,s.end(),'O');
           if(r!=1)
           {
            flag=1;
            break;
           }
           else break;
        }
     }
     cout<<flag<<endl;
return 0;
}