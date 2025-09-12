#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
 {   int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    string t=s;
    reverse(t.begin(),t.end());
    int x=stoi(t);

    for(int i=1;i<=8;i++)
    {
        if(i!=x)
        {
            cout<<s[0]<<i<<endl;
        }
    }
    char ch3='a';
    for(int i=1;i<9;i++)
    {
      if(ch3!=s[0])
      {
        cout<<ch3<<x<<endl;
        ch3++;
      }
      else{ch3++;}
    }
}
    
}