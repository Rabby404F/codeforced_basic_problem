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
  while(n--){
        string s;
        cin>>s;
        string root="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        if(root.find(s)!=string ::npos)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
  }
        return 0;
    
}