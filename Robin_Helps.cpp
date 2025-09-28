#include<iostream>
using namespace std;
int main()
{    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int have=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=k)have=have+arr[i];
        else if(arr[i]==0 && have!=0)
        {cnt++;
            have=have-1;}
    }
    cout<<cnt<<endl;
}
}