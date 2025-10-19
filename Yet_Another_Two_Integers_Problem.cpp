#include<iostream>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--)
    {
    long long a,b;
    cin>>a>>b;
    if(a<b)
    {
        long long temp=a;
        a=b;
        b=temp;
    }
    long long ans=((a-b)/10);
    if((ans*10)!=(a-b)){ans+=1;}
    cout<<ans<<endl;
}
}