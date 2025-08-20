#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    map<string,string>ma;
    for(int i=0;i<m;i++)
    {
        string name,ip;
       cin>>name>>ip;
       ma[ip]=name;
    }
    
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        s2.erase(s2.end()-1);
        cout<<s1<<" "<<s2<<"; #"<<ma[s2]<<endl;
    }
}