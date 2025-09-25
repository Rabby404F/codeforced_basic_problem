#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
    int arr[x];
    int temp=-1;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);
   
    
    int tcnt=1;
    for(int i=0;i<x-1;i++)
    {
        if(arr[i]==arr[i+1])
        {tcnt++;
        if(tcnt==3)
    {
        temp=arr[i];
        tcnt=0;
    }     
   }
    else{tcnt=1;}
    }
    cout<<temp<<endl;
}

}