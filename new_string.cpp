#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string a;
        cin>>a;
         int l=a.length();

        for(int i=0;i<l;i++)
        {
            if(a[i]=='p'){a[i]='q';}
            else if(a[i]=='q'){a[i]='p';}
        }
        

        reverse(a.begin(),a.end());
        cout<<a<<endl;

       
    }

    return 0; 
}