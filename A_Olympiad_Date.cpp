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
     vector<int>v(n);
     for(auto &x:v)cin>>x;
     int zcnt=0;
     int ocnt=0;
     int tcnt=0;
     int fcnt=0;
     int thcnt=0;
     int cnt=-1;
     
     for(int i=0;i<n;i++)
     {  
         if(v[i]==0)zcnt++;
        else if(v[i]==1)ocnt++;
        else if(v[i]==2)tcnt++;
        else if(v[i]==3)thcnt++;
        else if(v[i]==5)fcnt++;
         
        if(zcnt>=3 && ocnt>=1 && tcnt>=2 && thcnt>=1 && fcnt>=1)
        {
            cnt=i;
            break;
            
        }
        
        
     }
   if(cnt!=-1)cout<<cnt+1<<endl;
   else cout<<0<<endl;
    }
return 0;
}