#include<iostream>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--)
    {
    int a,b;
    cin>>a>>b;
    cout<<1440-((a*60)+b)<<endl;
    }
}