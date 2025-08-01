#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;

    string s;
    cin>>s;
for(int j=1;j<=m;j++)
{
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B'&& s[i+1]=='G')
        {
            char ch=s[i];
            s[i]=s[i+1];
            s[i+1]=ch;
            i++;
        }
    }
    
}
cout<<s<<endl;

return 0;
}