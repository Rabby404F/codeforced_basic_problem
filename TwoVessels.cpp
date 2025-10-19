#include<iostream>
using namespace std;
int main()
{    int x;
    cin>>x;
    while(x--){
    int a,b,c;
    cin>>a>>b>>c;
    int cnt =0;
    if(a<b)
    {
        int t=a;
        a=b;
        b=t;
    }
    while(a>b)
    {
        cnt++;
        b=b+c;
        a=a-c;

    }
    cout<<cnt<<endl;
}
}