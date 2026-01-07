#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
     if(n==7)cout<<"2 4 1"<<endl;
     else{
     int r=n/3;
     if(n%3!=0 )r++;
     int z=r+r+1;
     cout<<r<<" "<<r+1<<" "<<n-z<<endl;
     }
  }
     
return 0;
}