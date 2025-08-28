#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int sum=1;
    for(int i=0;i<n;i++)
    {   if(i==n-1)
        {
            arr[i]++;
        }
        sum=sum*arr[i];
    }
    cout<<sum<<endl;
}


}