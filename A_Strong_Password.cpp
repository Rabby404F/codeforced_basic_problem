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
    
     int pos=0;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]==s[i+1])
        {
            pos=i+1;
            
            break;
        }
        
        
     }
     if(pos!=0){
        char t = 'a';
		if(s[pos] == 'a') t = 'b';
        s.insert(pos,1,t);
         cout<<s<<endl;
     }
     
      else if(pos==0){
        if(s.back() == 'a') cout << (s + "b") << endl;
		else cout << (s + "a") << endl;
     }
    
    }
     
return 0;
}