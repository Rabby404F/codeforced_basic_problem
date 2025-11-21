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
  int x,y;
  cin>>x>>y;
  string s;
  cin>>s;


     map<char,int>m;
     char ch='A';
     for(int i=1;i<=26;i++)
     {
        m[ch]=0;
        ch++;
     }
     
     for(int i=0;i<s.size();i++)
     {
       m[s[i]]++;
     }
     int t=100000;
    
     char tch='A';
     for(int i=0;i<y;i++)
     {
         if(m[tch]<t)
         {
            t=m[tch];
         }
        tch++;
     }
     cout<<t*y<<endl;
     


return 0;
}