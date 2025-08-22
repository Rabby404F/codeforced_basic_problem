#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main()
{  int t;
    cin>>t;
   while(t--) {
    int m;
    cin>>m;
    string a;
    cin>>a;
    int n;
    cin>>n;
    string b,c;
    cin>>b>>c;
    for(int i=0;i<n;i++)
    {
        if(c[i]=='D')
        {
            a=a+b[i];
        }
        else 
        {
            a=b[i]+a;
        }
    }
    cout<<a<<endl;
}
return 0;
}