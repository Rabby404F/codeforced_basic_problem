#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {  
        if(arr[i]==4){
        count++;
        arr[i]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==4)
            {
                count++;
                arr[i]=0;
                arr[j]=0;
            }
        }
    }
    for(auto u:arr)cout<<u<<" ";
    cout<<endl;
    cout<<count<<endl;
   

}