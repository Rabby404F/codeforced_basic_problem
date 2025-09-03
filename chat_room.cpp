#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s="hello";

    string ss;
    cin>>ss;
    int flag=0;
    int n=ss.size();
    int x=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           if(ss[i]==s[x])
           {
            x++;
            flag++;
            
            break;

           }
        }

    }
    if(flag==5)cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}
}
