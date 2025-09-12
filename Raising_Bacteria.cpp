#include<iostream>
using namespace std;
int main()
{    
    long long n;
    cin>>n;
    long long cnt=1;
    long long st=1;
    long long last;

    while(1)
    {
       if(st==n)
       {
        cout<<cnt<<endl;
        break;
       }
       else if(st>n)
       {
        int r=n-last;
        cnt=cnt+r;
        cout<<cnt<<endl;
        break;
       }
       last=st;
       st=st*2;
    }
}