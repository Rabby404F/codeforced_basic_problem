#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    vector<string>v(5);
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    char ch=s1[0];
    char ch_2=s1[1];
    int count=0;
    for(int i=0;i<5;i++)
    {   string t=v[i];
        if(t[0]==ch || t[1]==ch_2){
            count++;
            break;
        }
    }
    if(count!=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
