#include<iostream>
#include<string>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    string s;
    cin>>s;
    char t_ch=s[0];
    cout<<t_ch;
    for(int i=1;i<n;i++)
    { 
         if(t_ch!= s[i])continue;
        else if(s[i]==t_ch && i+1<n){
       t_ch=s[i+1];
       cout<<t_ch;
       i++;}
    }
    cout<<endl;
}

}