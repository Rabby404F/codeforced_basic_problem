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
      long long x,y,n;
      cin>>x>>y>>n;
      if (n-n % x + y <= n) {
			cout << n - n % x + y << endl;
		} else {
			cout << n-n% x- (x- y) << endl;
		}
  }
return 0;
}