#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int ,int >m;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        m['1']=a;
        m['2']=b;
        m['3']=c;
        m['4']=d;

        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            sum=sum+m[s[i]];
        }
        cout<<sum<<endl;
}