#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
    long long arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);

    long long dif=0;
    for(int i=0;i<x;i+=2)
    {
        long long f=abs(arr[i+1]-arr[i]);
        
        if(f>dif)
        {
            dif=f;
        }
    }
    cout<<dif<<endl;
}
}