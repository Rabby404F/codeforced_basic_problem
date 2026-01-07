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
     int a;
     cin>>a;
     if(a%2==0)
     {
        cout<<4<<" "<<a-4<<endl;
     }
     else cout<<9<<" "<<a-9<<endl;
return 0;
}