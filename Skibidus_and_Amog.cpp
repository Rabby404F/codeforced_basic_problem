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
   
   s.erase(s.length()-2,2);
   s.push_back('i');
   cout<<s<<endl;
    }

}