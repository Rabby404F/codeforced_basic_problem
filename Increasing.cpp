#include<iostream>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--){
    int x;
    cin>>x;
    long long arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int f=0;
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(arr[i]==arr[j])
            {
                f++;
                break;
            }
        }
    }
    if(f==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}