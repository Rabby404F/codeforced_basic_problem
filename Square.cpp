#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--){
    vector<pair<int ,int>>v(4);
    for(int i=0;i<4;i++)
    {
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.begin(),v.end());
    int s=abs(v[0].second-v[1].second);
    cout<<s*s<<endl;
}
    
}