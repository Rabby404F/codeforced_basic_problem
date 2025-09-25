#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='C' ||arr[i][j]=='M'||arr[i][j]=='Y')
            {
                cnt++;
                break;
            }
        }
    }
    if(cnt==0)cout<<"#Black&White"<<endl;
    else{cout<<"#Color"<<endl;}
}
