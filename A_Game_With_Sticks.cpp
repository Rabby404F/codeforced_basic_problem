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
    int n,m;
    cin>>n>>m;
    int x=min(n,m);
    if(x%2==0 )
    {
        cout<<"Malvika"<<endl;
    }
    else cout<<"Akshat"<<endl;
return 0;
}