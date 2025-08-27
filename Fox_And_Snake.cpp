#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    string s;
    
    for(int j=0;j<n;j++)
    {
        if(j==n-1){s.push_back('#');}
        else{s.push_back('.');}
    }
   
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else{
            cout<<s<<endl;
            reverse(s.begin(),s.end());
        }
        
        }
    }
