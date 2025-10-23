#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    int n,k;
     cin>>n>>k;
     string s;
      
     for(int i=0;i<n;i++)
     {   char ch ='a';
        for(int j=1;j<=k;j++)
        {
            s+=ch;
            ch++;
        }
     }
     
     
     cout<<s<<endl;
    }
}