#include<iostream>
using namespace std;
int main()
{    int t;
    cin>>t;
    while(t--){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
     int sum=arr[0]+arr[1];
    
    int cnt=0;
    for(int i=1;i<x-1;i++)
    {
        if(arr[i]+arr[i+1]!=sum)
        {
            cnt++;
        break;        }
    }
    if(cnt==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}