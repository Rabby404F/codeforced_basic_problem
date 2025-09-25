#include<iostream>
using namespace std;
int main()
{    int t;
    cin>>t;
    while(t--){
    int x;
    cin>>x;
    int cnt=x/4;
    int rem=x%4;
    if(rem!=0)cnt++;
    cout<<cnt<<endl;
    }
    
}