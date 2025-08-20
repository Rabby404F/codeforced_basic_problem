#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    map<string,int>m;
   
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        m[s]++;
        if(m[s]==1)cout<<"OK"<<endl;
        else{
            cout<<s<<m[s]-1<<endl;
        }

    }
}