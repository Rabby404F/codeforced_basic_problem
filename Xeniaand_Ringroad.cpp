#include<iostream>
using namespace std;
int main()
{
    long long m,n;
    cin>>m>>n;
    long long start=1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(start<=arr[i])
        {
            sum=sum+(arr[i]-start);
           
        }
        else 
        {    int r=m-start;
           
            int x=r+arr[i];
           
            sum=sum+x;
            
        }
       start=arr[i];
    }
    cout<<sum<<endl;
}