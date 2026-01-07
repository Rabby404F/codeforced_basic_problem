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
  while(t--)
  {
     long long a,b,c,n;
     cin>>a>>b>>c>>n;
     long long m=max(a,max(b,c));
     cout<<m<<endl;
     int t=(m-a)+(m-b)+(m-c);
     cout<<t<<endl;
     if(n>=t)
     {
        if((a+b+c)%2==0 && n%2==0)cout<<"YES"<<endl;
        else if((a+b+c)%2!=0 && n%2!=0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

     }
     else cout<<"NO"<<endl;
    }
return 0;
}