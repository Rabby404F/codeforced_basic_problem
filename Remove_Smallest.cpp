#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{  int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    
    for(auto &x:v)
    {
        cin>>x;
    }
    sort(v.begin(),v.end());
    bool ok=false;

    for(int i=1;i<n;i++)
    {    int x=v[i];
        int y=v[i-1];
        if((x-y)>1)
        {
           ok=true;
       
        }
    }
    if(ok==false)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


}