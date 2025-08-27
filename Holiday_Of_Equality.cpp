#include<iostream>
#include<algorithm>
using namespace std;
int main()
{  
    
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int max=-1;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(arr[i]>max)max=arr[i];
    }
    cout<<max<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max)
        {
            int r=max-arr[i];
            sum=sum+r;
        }
    }
    cout<<sum<<endl;
}