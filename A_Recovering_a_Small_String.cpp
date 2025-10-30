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
     int x;
     cin>>x;
     
     map<int,char>m;
     char ch='a';
     for(int i=1;i<=26;i++)
     {
        m[i]=ch;
        ch++;

     }
  
     int r=x/3;
     
     if(x%3==0)
     {
        cout<<m[r]<<m[r]<<m[r]<<endl;
     }
     else{
        cout<<m[r]<<m[r]<<m[r+1]<<endl;
     }
  }
return 0;
}