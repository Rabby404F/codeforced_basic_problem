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
    int h=0;
   
    int d=n-1;

   while(1)
   {
    if(arr[d]==-1)break;
    else{arr[d]=0;}
    d--;
   }
   int p_count=0;
   int c_coutn=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]==-1)c_coutn++;
    else{p_count+=arr[i];}
   }
   int rs=p_count-c_coutn;
   cout<<abs(rs)<<endl;
   
}