#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(isupper(s[i]))count++;
    }
    if(n==1 && islower(s[0]))
    {
        s[0]=toupper(s[0]);
        cout<<s<<endl;
    }
    else if(n==1 && isupper(s[0]))
    {
        s[0]=tolower(s[0]);
        cout<<s<<endl;
    }
     else if(n==count){
      for(int i=0;i<n;i++)
       {s[i]=tolower(s[i]);}
       cout<<s<<endl;
    }
    
   else if(count==(n-1) && islower(s[0]) && isupper(s[1]))
    {
        s[0]=toupper(s[0]);
        for(int i=1;i<n;i++)
        {s[i]=tolower(s[i]);}
         cout<<s<<endl;
    }
   
    else {cout<<s<<endl;}
}