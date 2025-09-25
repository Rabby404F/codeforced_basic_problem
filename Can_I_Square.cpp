#include<iostream>
#include<cmath>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
    long long arr[x];
    int sum=0;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    
    int r=sqrt(sum);
    if(r*r==sum)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
}

}