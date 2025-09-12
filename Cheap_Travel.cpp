#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int m_sum=0;
    m_sum=m*b;
    
    int r=n-m*m;
    r=r*a;
    
    m_sum+=r;
    cout<<m_sum<<endl;

}