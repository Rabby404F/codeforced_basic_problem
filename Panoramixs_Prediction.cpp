#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int nx;
    int st=n+1;
   

    while(1){
        int cnt=0;
        for(int i=2;i<=sqrt(st);i++)
        {
            if(st%i==0)
            {cnt++;
            break;}
        }
        if(cnt==0)
        {
            nx=st;
            break;
        }
        else{st++;}
    }
   if(nx==m)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}