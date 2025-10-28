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
       int k,n;
    cin>>k>>n;
  int cnt=0;
  int i=2;
  int x=k;
    while(1)
    {
        cnt++;
        if((k%10)==n || k%10==0)
        {
            break;
        }
        else{
            k=i*x;
            i++;
        }
    }
    cout<<cnt<<endl;
return 0;
}