#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    s2=s1;
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;
    if(s1==s2)cout<<0<<endl;
    else
    {
        for(int i=0;i<s1.length()-1;i++)
        {
            if(s1[i]<=s1[i+1])
            {
                s1[i]='-';
            }
            if(s1[i]>s1[i+1])
            {
                s1[i]='-';
                break;
            }
        }
        cout<<s1<<endl;
    }

}