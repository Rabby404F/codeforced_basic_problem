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
     int i=n;
     while(1)
     {
      if(i%7==0)
      {
         cout<<i<<endl;
         break;
      }
      i++;
     }
    
     
     
    }
return 0;
}