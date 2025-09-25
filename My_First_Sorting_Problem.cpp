#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int temp;
        if(y<x)
        {
            temp=x;
            x=y;
            y=temp;
            cout<<x<<" "<<y<<endl;

        }
        else {cout<<x<<" "<<y<<endl;}
    }
}