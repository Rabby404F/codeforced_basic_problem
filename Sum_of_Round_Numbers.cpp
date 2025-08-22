#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long x;
    cin>>x;
    vector<long long>v;
    long long n=x;
  int r=1;
  int count=0;
    while(n!=0)
    {
        int rem=n%10;
        
        if(rem>0){
             count++;
             v.push_back(rem*r);
            
             
        }
        r=r*10;
        n=n/10;
       
    }
    cout<<count<<endl;
    for(auto u:v)cout<<u<<" ";
}