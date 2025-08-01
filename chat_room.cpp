#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="hello";

    string ss;
    cin>>ss;
    int n=ss.size();
    for(int i=0;i<n;i++)
    {
        if(ss[i]==ss[i+1]);
        ss.erase(i,1);
        i--;

    }
    cout<<ss<<endl;
}
