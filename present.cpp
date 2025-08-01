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
int f=1;
int i=0;
for(int k=1;k<=n;k++)
{
for(int i=0;i<n;i++)
{
if(arr[i]==f)
{
    cout<<i+1;
    if(k<=n){cout<<" ";}
    f++;
}
}
}
return 0;
}

