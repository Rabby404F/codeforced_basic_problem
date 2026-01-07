#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
     int n;
     cin>>n;
     while(n--){
        int a,b;
        cin>>a>>b;
        if(a>=b)
        {
            if(a%2==0 && b%2==0)cout<<"Yes"<<endl;
            else if(a%2!=0 && b%2!=0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else cout<<"No"<<endl;
     }

return 0;
}