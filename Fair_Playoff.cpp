#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
     vector<int>v;
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]>arr[1])
    {
        v.push_back(arr[0]);
    }
    else{v.push_back(arr[1]);}

    if(arr[2]>arr[3])
    {
        v.push_back(arr[2]);
    }
    else {v.push_back(arr[3]);}
   
    sort(v.begin(),v.end(),greater<int>());
    sort(arr,arr+4,greater<int>());
    if(arr[0]==v[0] && arr[1]==v[1])
    {
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}
}

}