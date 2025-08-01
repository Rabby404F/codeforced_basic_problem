#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<string, string>>v(n);
    for(int i=0;i<n ;i++)
    {
        cin>>v[i].first;
        cin>>v[i].second;
    }
    
    sort(v.begin(),v.end());
    int r =unique(v.begin(),v.end())-v.begin();
    cout<<r<<endl;


}