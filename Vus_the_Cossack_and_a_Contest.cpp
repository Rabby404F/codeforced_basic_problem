#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int cnt=0;
    if(x<y)cnt++;
    if(x<z)cnt++;

    if(cnt==0)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
}