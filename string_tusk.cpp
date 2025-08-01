#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int n=s.size();
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a' ||s[i]=='e'||s[i]=='i' ||s[i]=='o' ||  s[i]=='u'||s[i]=='y')
        {
        s.erase(i,1);
        i--;
        }
    }
   cout<<s<<endl;
    int r=s.size();
    for(int i=0;i<r;i++)
    {
        cout<<"."<<s[i];
    }
    
}