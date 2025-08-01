#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {   int x;
        cin>>x;
        string a;
        cin>>a;

        int r=a.length();

        int count=0;

        for(int i=0;i<r;i++)
        {
            if(a[i]=='1'){count++;}
        }
       

        if(count%+4==0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}