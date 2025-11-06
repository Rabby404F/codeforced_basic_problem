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
     char arr[8][8];
     
     for(int i=0;i<8;i++)
     {
        for(int j=0;j<8;j++)
        {
            cin>>arr[i][j];
        }
     }
     
     for(int i=1;i<7;i++)
     {
        for(int j=1;j<7;j++)
        {
            if(arr[i][j]=='#'  && arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#'  && arr[i+1][j-1]=='#' && arr[i+1][j+1]=='#')
            {
                cout<<i+1<<" "<<j+1<<endl;
                break;
            }
        }
     }
    }
return 0;
}