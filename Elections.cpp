#include<iostream>
using namespace std;
int main()
{   int t ;
    cin>>t;
    while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
    }
    else
    {
       
       if(a>b &&a>c)
       {cout<<"0 "<<(a-b)+1<<" "<<(a-c)+1<<endl;}
       else  if(b>a &&b>c)
       {cout<<(b-a)+1<<" 0 "<<(b-c)+1<<endl;}
       else  if(c>b &&c>a)
       {cout<<(c-a)+1<<" "<<(c-b)+1<<" 0"<<endl;}
        
    }
}
}