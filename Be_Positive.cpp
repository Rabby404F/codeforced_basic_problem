#include<iostream>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int cntm=0;
    int cntz=0;
    for(int i=0;i<x;i++)
    {
        if(arr[i]==0)cntz++;
        else if(arr[i]==-1)cntm++;
    }
    int r=cntm%2;
    int sum=cntz+(r*2);
    cout<<sum<<endl;
}
}