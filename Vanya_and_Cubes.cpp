#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=1;
    int cnt=0;
    int r=2;
    while(1)
    {
       if(n<sum)break;
       else{
        cnt++;
        n=n-sum;
        sum=sum+r;
        r++;
       }
    }
    cout<<cnt<<endl;

}