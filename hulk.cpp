#include<iostream>
#include<string>
using namespace std;

int main()
{      int n;
     cin>>n;

    string s="I hate ";
    string s1="I love ";
    string s3="that ";
    string s4="it";

    for(int i=1;i<=n;i++)
    {
        if(i%2 !=0)
        {
            cout<<s;
            if(i==n){cout<<s4;}
           else{ cout<<s3;}
        }
        else if(i%2==0)
        {
           cout<<s1;
             if(i==n){cout<<s4;}
           else{ cout<<s3;}
        }
        

    }

    
}