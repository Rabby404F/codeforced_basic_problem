#include <bits/stdc++.h>
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
     vector<string>v(n),v2(n),v3(n);
     int cnt1=0,cnt2=0,cnt3=0;
     for(auto &x:v)cin>>x;
      for(auto &x:v2)cin>>x;
       for(auto &x:v3)cin>>x;

       map<string,int>mp;
       for(int i=0;i<n;i++)
       {
        mp[v[i]]++;
        mp[v2[i]]++;
        mp[v3[i]]++;
       }
       for(int i=0;i<n;i++)
       {
        if(mp[v[i]]==3)continue;
        else if(mp[v[i]]==2)cnt1++;
        else if(mp[v[i]]==1)cnt1+=3;
       }
       for(int i=0;i<n;i++)
       {
        if(mp[v2[i]]==3)continue;
        else if(mp[v2[i]]==2)cnt2++;
        else if(mp[v2[i]]==1)cnt2+=3;
       }
       for(int i=0;i<n;i++)
       {
        if(mp[v3[i]]==3)continue;
        else if(mp[v3[i]]==2)cnt3++;
        else if(mp[v3[i]]==1)cnt3+=3;
       }

       cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;

       

     
      
    }

return 0;
}