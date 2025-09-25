#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    int x;
    cin>>x;
    char arr[x][4];
    for(int i=0;i<x;i++)
    {
        for (int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    

    for(int i=x-1;i>=0;i--)
    {   int count=0;
        for (int j=0;j<4;j++)
        {
           if(arr[i][j]=='#')
           {
            count++;
            cout<<count<<" ";
            break;}
           else{count++;}
        }
    }
    cout<<endl;
}
    

}