#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;

        string s="codeforces";
        int count=0;

        for(int i=0;i<s.size();i++)
        {
           if(s[i]==ch)
           {
            count++;
            break;
           }
        }
      if(count==0)cout<<"NO"<<endl;
      else{cout<<"YES"<<endl;}
    }
}