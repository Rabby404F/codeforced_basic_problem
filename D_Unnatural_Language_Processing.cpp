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
     queue<string>q;
     for(int i=0;i<n;i++)
     {  if((s[i]!='a'&& s[i]!='e') && (s[i+1]=='a' ||s[i+1]=='e') && (s[i+2]!='a'&& s[i+2]!='e') && (s[i+3]!='a' && s[i+3]!='e'))
        {
            q.push(s.substr(i, 3));
            i=i+2;
        }
       else if((s[i]!='a' &&s[i]!='e') && (s[i+1]=='a' ||s[i+1]=='e'))
        {
            q.push(s.substr(i, 2));
            i++;
           
        }
     }
    
     while (!q.empty()) {
            cout << q.front();
            q.pop();
            if (!q.empty()) cout << "."; 
           
     }
      cout<<endl;
    }
return 0;
}