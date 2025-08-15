#include<iostream>
#include<string>
using namespace std;

int main()
{ int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int count=0;
    int i=0;
    while(s[i]!='B')
    {
        count++;
        i++;
    }
    
    int count2=0;
    for(int j=count;j<n;j++)
    {
     if(s[j]=='B')
     {
        count2++;
        s[j]=='O';
     }
     else if(s[j]=='W'){count2++;}
    }
    int x=n-1;
    while(s[x]!='B')
    {
        
            count2--;
        
        x--;
    }
    cout<<count2<<endl;
}
return 0;
}