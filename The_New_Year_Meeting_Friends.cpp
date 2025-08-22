#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mid;
    int arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(arr,arr+3);
   
    int dis=(arr[1]-arr[0])+(arr[2]-arr[1]);
    cout<<dis<<endl;
}