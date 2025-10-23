#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        string s;
        cin>>s;
       
            string tm=s;
            reverse(s.begin(),s.end());
            cout<<min(s+tm,tm)<<endl;
        
    }
}