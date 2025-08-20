#include<iostream>
#include<vector>
using namespace std;

int main()
{  int t;
    cin>>t;
    while(t--)
    {
    int n;
    long long c;
    cin>>n>>c;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>c){count++;} 
       
        for(int j=i+1;j<n;j++)
        {
            arr[j]=(arr[j]*2);
        }
       
    }
    cout<<count<<endl;
}
return 0;
}