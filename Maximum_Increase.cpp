#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int cnt=1;
    int tcnt=1;
    for(int i=0;i<x-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            tcnt++;
        }
        else{
            if(cnt<tcnt)
            {
                cnt=tcnt;
            }
            tcnt=1;
              }
    }
    if(cnt<tcnt)
            {
                cnt=tcnt;
            }
    cout<<cnt<<endl;
}