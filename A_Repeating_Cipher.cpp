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
     int a=1;
     cout<<s[0];
     for(int i=1;i<s.size();i++)
     {
        cout<<s[i];
        i+=a;
        a++;
     }
return 0;
}