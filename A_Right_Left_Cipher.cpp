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
     string s;
     cin>>s;

     int j,k,i;
     

     if(s.size()%2==0) i=s.size()/2-1;
     else i=(s.size()/2);
     
     j=i+1;
     k=i-1;

     int n=0;
     while(n<=s.size()-1)
     {
        cout<<s[i];
        if(n%2==0)
        {
            i=j;
            j++;
        }
        else{
            i=k;
            k--;
        }
        n++;
     }

return 0;
}