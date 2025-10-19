#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<pair<int ,int>>v(n);
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
        
        if(v[i].first<=10 && max<v[i].second)
        {
            max=v[i].second;
        }
    }
    
    

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt++;
        
         if( v[i].second==max)
        {  
            break;}
        
    }
    cout<<cnt<<endl;
}
}