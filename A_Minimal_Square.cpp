#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>
#include<cmath>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
  int t;
  cin>>t;
  while(t--){
     int a,b;
     cin>>a>>b;
     if(a==b)cout<<(a+a)*(b+b)<<endl;
     else{
     int x=a*b*2;
     x=ceil(sqrt(x));
     cout<<x*x<<endl;
     }
  }
return 0;
}