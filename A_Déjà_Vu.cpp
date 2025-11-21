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
     string e;
     cin>>e;
     string s=e;
     sort(s.rbegin(),s.rend());
     int r= unique(s.begin(),s.end())-s.begin();
     if(s[0]=='a' && r==1)cout<<"NO"<<endl;
     else 
     {
        string f=e+'a';
        string x=f;
        reverse(x.begin(),x.end());
        if(f!=x)
        {   
            cout<<"YES"<<endl;
            cout<<f<<endl;
        }
        else
        { 
            e='a'+e;
            cout<<"YES"<<endl;
            cout<<e<<endl;
        }
     }
  }
     return 0;
}