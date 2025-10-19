#include<iostream>
using namespace std;
int main()
{
    int cnt=0;
    int a,b;
    cin>>a>>b;

    int has=240-b;
    int i=1;
    while(1)
    {   
        has=has-(5*i);
         
        if(has<0 ){break;}
        cnt++;
        if(cnt==a)break;
        
        i++;
    }
    cout<<cnt<<endl;
}