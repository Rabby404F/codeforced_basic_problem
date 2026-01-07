#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
  int t;
  cin>>t;
  while(t--){
     long long n;
     cin>>n;
     int x=n%3;
     if(n==1)cout<<2<<endl;
     else{
     if(n%3==0)cout<<n/3<<endl;
     else if(n%2==0 && x==2)cout<<min(n/2,(n/3)+1)<<endl;
     else if(n%2==0 && x==1)cout<<min(n/2,(n/3)+1)<<endl;
     else 
     {
        if(x==2)cout<<(n/3)+1<<endl;
        else cout<<(n/3)+1<<endl;     }
  }
}

return 0;
}