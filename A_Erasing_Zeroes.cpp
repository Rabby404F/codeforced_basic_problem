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
     string s;
     cin>>s;
     string s1=s;
     sort(s1.begin(),s1.end());
    
     
     if(s1.back()=='0')
     {
        cout<<0<<endl;
    
     }
     else{
int n=s.find('1');
int m=s.rfind('1');
int x=(m-n)+1;
int cnt=0;
for(int i =0;i<s.length();i++)
{
if (s[i]=='1')
{
    cnt++;
}
}
cout<<x-cnt<<endl;
     }
  }

return 0;
}