#include<iostream>
using namespace std;
 int main()
 {
    string s[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>s[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<s[i][j];
        }
        cout<<endl;
    }
   
 }