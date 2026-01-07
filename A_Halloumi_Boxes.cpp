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
     int x;
    cin>>x;
    while(x--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0;i < n;i++){
            cin>>arr[i];
        }
        if(is_sorted(arr,arr+n) || k > 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}