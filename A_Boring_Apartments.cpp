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
     int degit=n%10;
     
     int sum=(degit-1)*10;
     int dcnt=0;
     while(n!=0)
     {
        dcnt++;
        n=n/10;
     }
     if(dcnt==1)sum+=1;
     else if(dcnt==2)sum+=3;
     else if(dcnt==3)sum+=6;
     else sum+=10;

     cout<<sum<<endl;

  }
     

return 0;
}