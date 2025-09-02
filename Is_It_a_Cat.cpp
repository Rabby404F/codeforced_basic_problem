#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{  int t;
    cin>>t;
    while(t--)
    {
    vector<char>v;
    string X="MEOW";
    string temp;
    int n;
    cin>>n;
    string s;
    cin>>s;
   
    s[0]=toupper(s[0]);
     for(int i=0;i<s.length();i++)
    {
        s[i]=toupper(s[i]);
        
    }
    temp=temp+s[0];
    for(int i=1;i<n;i++)
    {
         if(s[i]!=s[i-1])
        {
           temp=temp+s[i];
        }
    }
    

    if(temp==X)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
   

    
    
    
   
    
}
return 0;
}