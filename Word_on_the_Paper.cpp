#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--)
    {
    vector<string>v;
    for(int i=1;i<=8;i++)
    {
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<8;i++)
    {
        for(auto u:v[i])
        {
            if(isalpha(u))cout<<u;
        }
    }
    cout<<endl;
}
return 0;
}
