#include<iostream>
#include<string>
#include<set>
#include<cctype>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    set<char>ss;

    for(int i=0;i<s.length();i++)
    {
       if(isalpha(s[i]))
       {
        char ch=s[i];
        
       ss.insert(ch);
       }
    }
    cout<<ss.size()<<endl;
}