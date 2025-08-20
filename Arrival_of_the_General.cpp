#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_loc=0;
    int min_loc=0;
    int max=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_loc=i;
        }
    }
    int t=arr[0];
    int t2;
    arr[0]=max;

    for(int i=1;i<=max_loc;i++)
    {   
        t2=arr[i];
        arr[i]=t;
        t=t2;
        
    }
    

    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=min)
        {
           min=arr[i];
           min_loc=i;
        }
    }
    
    int n_s=(max_loc-0);
    int ns1=(n-min_loc-1);
    cout<<n_s+ns1<<endl;
   


}