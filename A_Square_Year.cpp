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
     int n;
     cin>>n;
     int r=sqrt(n);
     if(r*r==n)cout<<0<<" "<<r<<endl;
     else cout<<"-1"<<endl;
  }
     
return 0;
}