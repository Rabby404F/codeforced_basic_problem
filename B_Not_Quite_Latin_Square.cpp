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
  while(t--)
  {
     vector<string>v(3);
     for(auto &x:v)cin>>x;
     int acnt=0;
     int bcnt=0;
     int ccnt=0;
     for(int  i=0;i<3;i++)
     {
       for(char u:v[i])
       {
        if(u=='A')acnt++;
        else if(u=='B')bcnt++;
        else if (u=='C')ccnt++;
       }
     }
     
     if(acnt<3)cout<<'A'<<endl;
     else if(bcnt<3)cout<<"B"<<endl;
     else cout<<"C"<<endl;
    }

return 0;
}