#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>v(n);
    
    for(int i=0;i<n;i++)
    {
      cin>>v[i].first>>v[i].second;
    }
    int cnt=0;
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        if(s<=v[i].first){break;}
       
        else{
            cnt++;
            s=s+v[i].second;
        }
    }
    
    if(cnt==n)cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}

}