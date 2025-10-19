#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int cnt=0;
    int n_cnt=0;
    int sum=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='x')
        {
            cnt++;
        }
        else
        {
            if(cnt>2)
            {
                sum=sum+cnt;
                n_cnt++;
            }
            cnt=0;
        }
    }
    if(cnt>2)
            {
               sum=sum+cnt;
               n_cnt++;
            }
    cnt=0;
   
    if(sum<=2)
    {
        cout<<0<<endl;
    }
    else{
        while(sum>2*n_cnt)
        {
             cnt++;
             sum--;
        }
        cout<<cnt<<endl;
    }
    
}