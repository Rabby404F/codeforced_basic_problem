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
        if(s.find("esY") != string::npos || s.find("Yes") != string::npos || s.find("YesYes") != string::npos || s.find("sYes") != string::npos || s.find("e") != string::npos)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
return 0;
    }
}