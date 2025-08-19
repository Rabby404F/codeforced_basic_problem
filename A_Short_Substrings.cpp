#include<iostream>
#include<string>
using namespace std;

int main()
{  int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    int n=s.length();
    cout<<s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i+1])
        {
            cout<<s[i];
            i++;
        }
        else{cout<<s[i];}
    }
    cout<<endl;
}
return 0;
}