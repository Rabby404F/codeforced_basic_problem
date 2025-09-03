#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=1;
    for(int i=0;i<n-1;i++)
    {
      if(arr[i]>arr[i+1])
      {if(max<count)max=count;
        
        count=1;
      }
      else {
        count++;
    }
    }
    if(count>max)max=count;
    cout<<max<<endl;
}