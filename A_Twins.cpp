#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum=sum+v[i];
    };
    int count=0;
    int sum2=0;
    sort(v.begin(),v.end(),greater<int>());
   
    
    int i=0;
    while(1)
    {
       
      
        sum2=sum2+v[i];
        sum=sum-v[i];
        count++;
        i++;
         if(sum2>sum)break;
    }
    cout<<count<<endl;
}