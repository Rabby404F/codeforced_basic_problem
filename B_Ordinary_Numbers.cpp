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
        long long n;
        cin>>n;
        if(n>=1 && n<=9)cout<<n<<endl;
        else
        {
         int cnt=0;
        int r=1;
         while(r<n)
         {
            cnt+=9;
            r*=10;
         }
        
         if(r==n) cout<<cnt<<endl;
         else{
            for(int i=r;i>n;i--)
            {
               vector<int>v;
               int x=i;
               while(x!=0)
               {
                  v.push_back(x%10);
                  x=x/10;

               }
               int nn=unique(v.begin(),v.end())-v.begin();
               cout<<n<<endl;
               if(nn==1)cnt--;

            }
            cout<<cnt<<endl;
         }
      
      
        }
        
     }
return 0;
}