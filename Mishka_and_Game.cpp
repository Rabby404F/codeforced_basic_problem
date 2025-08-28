#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m_cnt=0;
    int c_cnt=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)m_cnt++;
        else if(b>a) c_cnt++;
        else{continue;}
    }
    if(m_cnt>c_cnt)cout<<"Mishka"<<endl;
    else if(c_cnt>m_cnt)cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;
}