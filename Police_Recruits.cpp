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
    int mcnt=0;
    int ocnt=0;
    int final=0;

    for(int i=0;i<x;i++)
    {
        if(arr[i]==1)ocnt++;
        else if(arr[i]==-1)
        {
            mcnt++
        }
    }
}