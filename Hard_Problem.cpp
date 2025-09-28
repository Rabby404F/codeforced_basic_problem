#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ns=m*2;
    int space=ns;
    int cnt=0;
    
    if(a<=m)
    {
        cnt+=a;
        space-=a;
    }
    else
    {
        cnt+=m;
        space-=m;

    }
    if(b<=m)
    {
        cnt+=b;
        space-=b;
    }
    else
    {
        cnt+=m;
        space-=m;

    }
   
    if(c<=space)
    {
        cnt+=c;
        space-=c;
    }
    else{
        cnt+=space;
    }
    cout<<cnt<<endl;
}
    
}