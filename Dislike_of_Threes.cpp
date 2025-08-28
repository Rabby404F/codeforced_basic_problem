#include<iostream>
using namespace std;
int main()
{ int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int r=1;
    int x=1;
    int cnt;
    while(r<=n)
    {
      if(x%3==0 || x%10==3){
        x++;
        continue;
      }
      else {
        cnt=x;
        r++;
        x++;
      }
    }
    cout<<cnt<<endl;
}
}