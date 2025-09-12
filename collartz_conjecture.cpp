#include<iostream>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--)
    {
    int a,b;
    cin>>a>>b;

    for(int i=0;i<a;i++)
    {
        b=b*2;
    }
    cout<<b<<endl;
}
return 0;

}