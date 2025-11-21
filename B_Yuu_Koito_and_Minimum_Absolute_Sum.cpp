#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>
#include<cmath>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);

int main() {
  fast_io;
  int t;
  cin>>t;
  while(t--)
  {
  int n;
  cin>>n;
     vector<int>v(n);
     for(auto &u:v)cin>>u;
     if(v.front()!=-1 && v.back()!=-1)
     {
        cout<<abs(v.back()-v.front())<<endl;
     }
     else if(v.front()==-1 || v.back()==-1){
      cout<<"0"<<endl;
     }
    



    if((v.front()==-1  && v.back()==-1) )
    {
        for(auto &u:v)
        {
            if(u==-1)
            {
                u=0;
            }
        }
        for(auto u:v)cout<<u<<" ";
        cout<<endl;
    }
    else if( (v.front()!=-1 && v.back()!=-1))
    {
        for(auto &u:v)
        {
            if(u==-1)
            {
                u=0;
            }
        }
        for(auto u:v)cout<<u<<" ";
        cout<<endl;

    }

    
    else{
        int r;
        (v.front()>v.back()) ? r=v.front():r =v.back();
        v.front()=r;
        v.back()=r;
        for(int i=1;i<v.size()-1;i++)
        {
            if(v[i]==-1)
            {
                v[i]=0;
            }
        }
        for(auto u:v)cout<<u<<" ";
        cout<<endl;
    }
}




return 0;
}